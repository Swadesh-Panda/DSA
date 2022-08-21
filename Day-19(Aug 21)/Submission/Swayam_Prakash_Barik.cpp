
#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
    public:
    bool static cmp(vector<int> &a,vector<int> &b){
        return a[1] < b[1];
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<vector<int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({start[i], end[i]});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        int i = 1, end2 = v[0][1], c = 1;
        
        while(i < n){
            if(v[i][0] > end2){
                c++;
                end2 = v[i][1];
            }
            i++;
        }
        return c;
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} 

// Time Complexity - O(NlogN) - N - length of array
// Space Complexity - O(N) - N - length of array