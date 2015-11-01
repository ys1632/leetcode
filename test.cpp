#include <iostream>
#include <vector>
//#include <limits>
#include <cstring>
//#include <cctype>
#include <set>
#include <sstream>
#include <map>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <thread>
#include <mutex>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <queue>

using namespace std;

// bool color(int num) {
//     if (num < 0)
//         return false;
//     set<int> s;
//     string str = to_string(num);
//     //int color = str[0] - '0';
//     //s.insert(color);
//     for (int i = 0; i < str.length(); ++i) {
//         int n = str[i] - '0';
//         cout << "check: " << n << endl;
//         if (s.find(n) != s.end())
//             return false;
//         else
//             s.insert(n);
//     }
//     for (int i = 0; i < str.length(); ++i) {
//         int color = str[i] - '0';
//         for (int j = i + 1; j < str.length(); ++j) {
//             int n = str[j] - '0';
//             color *= n;
//             cout << "check: " << color << endl;
//             if (s.find(color) != s.end())
//                 return false;
//             else
//                 s.insert(color);
//         }
//     }
//     return true;
// }

// string longestCommonPrefix(vector<string> &strs) {
//         int n = strs.size();
//         int index = 0;
//         if (n == 0) return "";
//         //if (n == 1) return strs[0];
        
//         int minLen = strs[0].length();
//         string ans = "";
//         string shortest = strs[0];
        
//         for (int i = 1; i < n; i++) {
//             if (strs[i].length() < minLen) {
//                 minLen = strs[i].length();
//                 index = i;
//                 shortest = strs[i];
//             }
//         }
//         cout << shortest <<endl;
//         cout << "minLen: " << minLen <<endl;

//         for (int i = 0; i < minLen; i++) {
//         	int j;
//             for (j = 1; j < n; j++) {
//                 if (strs[j][i] != strs[j-1][i]) {
//                     break;
//                 }
//             }
//             if (strs[n-1][i] == strs[n-2][i])
//             	ans = shortest.substr(0, i+1);
//             else ans = shortest.substr(0, i);

//         }
        
//         return ans;
        
//     }

// void show(string ans[3]) {
//     cout << ans[0] << endl;
// }

 // void nextPermutation(vector<int>& nums) {
 //        cout<< "haha"<<endl;
 //        int s = nums.size();
 //        cout << "s: " << s << endl;
 //        int j, i, k;
 //        bool largest = true;
 //        for (i = s - 1; i >= 1; i--) {
 //            j = i-1;
 //            if (nums[j]<nums[i]) {
 //                largest = false;
 //                break;
 //            }
 //        }
 //        if (largest) {
 //            sort(nums.begin(), nums.end());
 //            return;
 //        }
 //        for (k = s - 1; k>0; k--) {
 //            if (nums[k]>nums[j]) {
 //                int temp = nums[k];
 //                nums[k] = nums[j];
 //                nums[j] = temp;
 //                break;
 //            }
 //        }
 //        sort(nums.begin() + i, nums.end());
 //    }
// bool isHappy(int n) {
//         int sum;
//         while (n!=1) {
//             sum = 0;
//             while(n>0) {
//                 sum += pow(n%10, 2);
//                 n /= 10;
//             }
//             n = sum;
//         }
//         return false;
//     }

// int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
//         int s1 = (D - B) * (C - A);
//         int s2 = (H - F) * (G - E);
//         int overlap = 0;
//         cout << "B " << B <<endl;
//         cout << "D " << D <<endl;
//         cout << "F " << F <<endl;
//         cout << "H " << H <<endl;
//         cout << "A " << A <<endl;
//         cout << "C " << C <<endl;
//         cout << "E " << E <<endl;
//         cout << "G " << G <<endl;
//         if ((B<F<D || B<H<D) && (A<E<C || A<G<C)) {
//             int a = min(A,E);
//             int b = min(B,F);
//             int c = min(C,G);
//             int d = min(D,H);
//             overlap = (c - a) * (d - b);
            
//         }
        
//         return s1 + s2 - overlap;
        
        
//     }

// bool isIsomorphic(string s, string t) {
//         map<char, char> dic;
//         int len = s.length();
//         for (int i = 0; i < len; i++) {
//             if (dic.find(s[i]) == dic.end()) {
//                 dic[s[i]] = t[i];
//             }
//             else {
//                 s[i] = dic[s[i]];
//             }
//         }
//         cout << t << endl;
//         cout << s << endl;
//         if (s.compare(t) == 0) return true;
//         else return false;
//     }

// int trailingZeroes(int n) {
//         int fac = 1;
//         int cnt = 0;
//         for (int i = 1; i <= n; i++) {


//             fac *= i;
//             while (fac >= 10) {
//                 if (fac%10 == 0) {
//                     cnt++;
//                     fac/=10;
//                 }
//                 else fac %= 10;
//             }
//             cout << "**** "<<fac << endl;

//         }
        
//         return cnt;
//     }
// string countAndSay(int n) {
//         stringstream ss;
//         ss << n;
//         string s = ss.str() + "-";
//         ss.clear();
//         int dup = 0;
        
//         cout<<"s: " << s << endl;

//         while (n>1) {
//             for (int i = 0; i < s.length() - 1; i++) {
//                 if (s[i] == s[i+1]) {
//                     dup++;
//                     //continue;
                    
//                 }
//                 else {
//                     if (dup == 0) {
//                         s.insert(i, 1, '1');
//                         i++;
                        
//                     }
//                     if (dup > 0) {
//                         int cnt = dup + 1;
//                         stringstream ss2;
//                         ss2 << cnt;
//                         string s2 = ss2.str();
//                         ss2.clear();
//                         s.replace(i - dup, dup, s2);
                        

//                         i = i - dup + 1;
                        
//                         dup = 0;
                        
//                     }
//                 }

//             }
//             cout << "n: " << n << endl;
//             n--;
//         }
//         s.pop_back();
//         return s;
// }


//A1->B1->C1->A2->B2->C2 ...
//B1->C1->A1->B2->C2->A2 ...

// ListNode reverseList(ListNode * head) {
//     if (!head || !head->next) return head;
    
//     ListNode * res = head->next;
//     ListNode * temp = head->next->next->next;
//     head->next->next->next = head;
//     head->next = temp;

//     while (temp) {
//         head = temp;
//         temp = head->next->next->next;
//         head->next->next->next = head;
//         head->next = temp;
//     }
//     return  res;
// }


// void helper(vector<string> & res, string s, int index) {
//     if (index == s.length()) {
//         res.push_back(s);
//         return;
//     }

//     for (int i = index; i < s.length(); i++) {
//         if (s[i] == '?') {
//             s.replace(i, 1, "j");
//             helper(res, s, i+1);
//             s.replace(i, 1, "k");
//             helper(res, s, i+1);
//             return;
//         }
//     }
// }

// vector<string> permutation(string s) {
//     vector<string> res;
//     helper(res, s, 0);
//     return res;
// }



// class A {
// public:
// 	virtual ~A() {f();}
// 	virtual void f() {cout << "A" << endl;}
// };

// class B : public A {
// public:
// 	~B() {}
// 	virtual void f() {
// 		cout << "b" << endl;
// 	}
// };
// struct A {
// 	~A() {
// 		cout << "~A";
// 	}
// };

// struct B : public A {
// 	virtual ~B() {
// 		cout << "~B";
// 	}
// };

// struct Base {
// 	virtual void print() {
// 		int x = 1;
// 		cout << "Base:" << x;
// 	}
// };

// struct Derived : public Base {
// 	 void print() {
// 	 	int x = 2;
// 		cout << "Derived:" << x;
// 	}
// };

// class Animal {
// private:
//   string m_strName;

// protected:
//   Animal (const string& strName): m_strName(strName) {}
// public:
//   const string& GetName() {
//     return m_strName;
//   }
//   const char* Speak() {return "???";}
// };

// class Cat: public Animal {
// public:
//   Cat(const string& strName): Animal(strName) {}
//   const char* Speak() {return "Meow";}
// };

// class Dog: public Animal {
// public:
//   Dog(const string& strName): Animal(strName) {}
//   const char* Speak() {return "Woof";}
// };

// struct Process
// {
//   int arr;
//   int exe;
//   Process(int x, int y) : arr(x), exe(y) {}
// };



int main() {
    int arr[] = {1,1,2,0};
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
    q.push(make_pair(1,2));
    q.push(make_pair(101,20));
    q.push(make_pair(100,200));

    cout << q.top().first << endl;

    return 0;
    //cout << r << endl;
    //cout << b << endl;


}
