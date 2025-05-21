/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
class Solution { // leetcode add two numbers :(
public:
    string sum(string a, string b) {
        while(a.size() < b.size()) {
            a.insert(0,"0");
        }
        while(a.size() > b.size()) {
            b.insert(0,"0");
        }
        int n = a.size();
        vector<int> v;
        int q = 0;
        for(int i = n-1; i>=0; i--) {
            int tong = a[i] - '0' + b[i] - '0'+ q;
            if(tong >= 10) {
                int r = tong%10;
                v.push_back(r);
                tong/=10;
                q=tong;
            } else {
                v.push_back(tong);
                q=0;
            }
        }
        if(q) {
            v.push_back(q);
        }
        reverse(v.begin(), v.end());
        string s = "";
        for(int x : v) {
            s+=x+'0';
        }
        return s;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1;
        while(l1!=NULL) {
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        vector<int> v2;
        while(l2!=NULL) {
            v2.push_back(l2->val);
            l2 = l2->next;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        string s1 = "";
        for(int i : v1) s1+=i + '0';
        string s2 = "";
        for(int i : v2) s2+=i + '0';
        ListNode* result = new ListNode();
        ListNode* tam = result;
        string k = sum(s1,s2);;
        reverse(k.begin(), k.end());
        int p = 0;
        for(char i : k) {
            int temp = i - '0';
            result->val = temp;
            if(p!=k.size()-1) {
                ListNode* x = new ListNode();
                result->next = x;
                result = result->next;
            }
            p++;
        }
        return tam; 
    }
};
