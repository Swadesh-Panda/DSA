#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int n = strs.size();
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            int k = 1;
            while(k < n){
                if(strs[k][i] != s[i]){
                     return ans;
                }
                k++;
            }
            
            if(k == n){
                ans += s[i];
            }
        }
        return ans;
    }
};

// Time Complexity - O(K*N) - N - length of strs and K - length of str[0]
// Space Compelxity - O(K) - K - length of str[0]