struct meet {
    int s;
    int e;
};

class Solution
{
    
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int c=0, ans=0;
        vector<meet> m(n);
            
        for(int i=0; i<n; i++){
            m[i].s = start[i];
            m[i].e = end[i];
        }
        sort(m.begin(), m.end(), [] (const meet a, const meet b) -> bool {
            return a.e < b.e;
        });
        for(int i=0; i<n; i++){
            if(m[i].s > c){
                ans++;
                c = m[i].e;
            }
        }
        return ans;
    }
};
