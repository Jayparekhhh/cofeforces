#include <bits/stdc++.h>
using namespace std;
 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int i = 0; i<t; i++){
    int n; int a; int b;
    cin>>n>>a>>b;
    if(abs(a-b)%2 == 0){
        cout<<"YES"<<endl;
     }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
    }
