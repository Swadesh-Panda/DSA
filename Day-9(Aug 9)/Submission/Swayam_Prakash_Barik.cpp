#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I'] = 1, m['V'] = 5, m['X'] = 10, m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
        int n = s.size(), ans = 0;
        for(int i = 0; i < n; i++){
            // handling IV,IX,XL,XC,CD,CM cases
            if(m[s[i]] < m[s[i+1]]){
                ans += (m[s[i+1]] - m[s[i]]);
                i++;
            }else{
                ans += m[s[i]];
            }
        }
        return ans;
    }
};

// Time Complexity - O(N) - length of string
// Space Complexity - O(N) - Length of string