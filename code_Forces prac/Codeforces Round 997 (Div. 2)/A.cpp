
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
 
// int32_t main() {
// 	int t;
// 	cin>>t;
 
// 	while(t--)
// 	{
// 	    int n,m;
// 	    cin>>n>>m;
 
 
// 	   int ans=4*m*n;
 
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        int x,y;
// 	        cin>>x>>y;
 
// 	        if(i==0)
// 	        {
// 	            continue;
// 	        }
 
// 	        ans-=2*(m-x+m-y);
 
 
 
 
// 	    }
 
// 	    cout<<ans<<endl;
 
// 	}
 
// 	return 0;
 
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, m;
        cin >> n >> m; 

        int ans = 4 * m * n; 

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y; 

            if (i == 0) {
                continue;
            }

            ans -= 2 * (m - x + m - y);
        }

        cout << ans << endl;
    }

    return 0;
}
