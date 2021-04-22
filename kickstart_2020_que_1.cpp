#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v.push_back(p);

        }
        int count =0;
        int max=-1;
        for(int j=0;j<n;j++)
        {
            if(v[j]>max)
            {
                max=v[j];
                if(i==n-1 || v[j]>v[j+1])
                {
                    count++;
                }
            }
        }
        cout<<"Case #"<<j<<": "<<count<<endl;
    }
}