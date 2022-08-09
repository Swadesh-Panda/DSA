#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0 || n == 1){
            return s;
        }
        
        int ansLen = 0, ansInd = 0;        
        vector<vector<int>> dp(n+1,vector<int>(n+1));
        
        // fill the diagonal element of matrix, that means we know that a string of length 1 is always palindrome
        for(int i = 0;i < n; i++){
            dp[i][i] = 1;
            ansLen = 1,ansInd = i;
        }      
        
        // For string of len 2, we know that if the first and second element is same that means that is palindrome
        for(int i = 0; i < n-1; i++){
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                ansLen = 2,ansInd = i;
            }
        }
        
        // For strings of len greater than 3, if the first and last element is same then check for the remaining element, as we have already stored the internal element, check for it.
        for(int len = 2; len < n; len++){
            int start = 0, end = start+len;
            for(;end < n; start++,end++){
                if(s[start] == s[end] and dp[start+1][end-1]){
                     dp[start][end] = 1;                      
                     if((len+1) > ansLen){
                         ansLen = max(ansLen,len+1);
                         ansInd = start;
                     }
                }
            }
        }
        string ans = s.substr(ansInd,ansLen);
        return ans;
    }
};

// Time Complexity - O(N*N) - N - Length of string
// Space Complexity - O(N*N) - N - Length of string