#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;char c;cin>>c;
        string s;
        cin>>s;
        if(c == 'g') cout<<0<<endl;
        else{
            // int ans=INT_MIN;
            vector<int> g;
            vector<int> c1;
            for(int i=0;i<n;i++){
                if(s[i] == c){
                    c1.push_back(i);
                }
                if(s[i]=='g') g.push_back(i);
            }
            int ans=INT_MIN;
            for (int i :c1)
            {
                // if (s[i] == c)
                // {
                int a;
                int x=upper_bound(g.begin(),g.end(),i)-g.begin();
                if(x==g.size()){
                    if(i>g[0])
                    a=n-i+g[0];
                }
                else
                a=g[x]-i;
                ans=max(ans,a);
                // }
            }
                    
                    cout << ans << endl;
                }
            }
}