#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int total = 0;
        
        for(int i=0; i<s.size(); i++){
            if((s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) || (s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')) || (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))){
                total -= mp[s[i]]; 
            }
            else{
                total += mp[s[i]];
            }
        }
        
        return total;
    }
};

int main(){
    Solution sol;
    string s;
    cin>>s;
    cout<<sol.romanToInt(s);
    return 0;
}