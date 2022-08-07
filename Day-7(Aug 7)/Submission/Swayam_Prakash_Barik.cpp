#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    string reverseWords(string s) {        
        vector<string> st;
        stringstream ff(s);
        string word;
        // push every word in the string to a data structure
        while(ff >> word){
            st.push_back(word);
        }
        // reverse it to get our required answer
        reverse(st.begin(),st.end());
        s = "";
        for(auto x: st){
            s += x + " ";
        }
        // because of extra space at the end
        s.pop_back();
        return s;
    }
};

// Time Complexity - O(N) - N - length of the string
// Space Complexity  - O(P*K) - p - No. of word of the string and K is the average length of word