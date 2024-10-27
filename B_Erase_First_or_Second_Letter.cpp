#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int ans = 0;
    vector<int>tt(26);
    for(int i=0;i<n;i++){
           if(tt[s[i]-'a']!=1){
            ans += (n-i);
            tt[s[i]-'a']=1;
           }
    }
    cout<<ans<<endl;

 }


    return 0;
}
