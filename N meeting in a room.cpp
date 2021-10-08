#include <bits/stdc++.h>
using namespace std;

// sort according to end and compare according to first

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++)
        {
            a[i].first=end[i];
            a[i].second=start[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
        int e=a[0].first,s=a[0].second;
        for(int i=0;i<n;i++)
        {
            if(e<a[i].second)
            {
                ans++;e=a[i].first;
            }
        }
        return ans+1;
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
}  // } Driver Code Ends
