#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    int a = max(x,y);
    int b = min(x,y);
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
            }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    for(int i = 0;i<t;i++)
    {
        int n;
        cin>>n;
        int count = 0;
        vector<int> p;
        vector<int> q;
        for(int i = 0;i<n;i++)
        {
            int in;
            cin>>in;
            if(in%2 == 0)
            {
            p.push_back(in);
            }
            else
            {
                q.push_back(in);
            }
        }
            vector<int> arr;

    arr.reserve(p.size() + q.size());

    arr.insert(arr.end(), p.begin(), p.end());
    arr.insert(arr.end(), q.begin(), q.end());


        for(int i = 0;i<n;i++)
        {
            for(int j = i+1; j<n;j++)
            {
                if(gcd(arr[i],arr[j])>1||arr[i]%2 == 0)
                {
                    count = count + 1;
                }

            }

        }
        cout<<count<<endl;


    }
    return 0;
    }
