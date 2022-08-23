#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public: 
    int findPlatform(int arr[], int dep[], int n)
    {
         sort(arr,arr+n);
         sort(dep,dep+n);
         
         int i = 0, j = 0;
         int platformReq = 0, ans = 0;
         while(i < n and j < n){
             if(arr[i] > dep[j]){
                 platformReq--;
                 j++;
             }else{
                 platformReq++;
                 i++;
             }
             ans = max(ans, platformReq);
         }
         
         return ans;
    }
};
 
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}

// Time Complexity - O(NlogN) - N - length of array
// Auxiliary Space Complexity - O(1)