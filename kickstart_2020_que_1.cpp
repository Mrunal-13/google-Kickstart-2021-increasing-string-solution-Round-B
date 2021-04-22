#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		int c=0;
		cin>>n;
		vector<char>s;
		for(int j=0;j<n;j++)
		{
		    char p;
		    cin>>p;
		    s.push_back(p);
		}
		cout<<"Case #"<<i+1<<": ";
		for(int j=0;j<n;j++)
		{
			vector<int>count;
			if(s[j]<s[j+1])
			{
			  	c++;
			    count.push_back(c);
			}
			else
			{
			   	c++;
			   	count.push_back(c);
			   	c=0;
			}
			for(int k=0;k<count.size();k++)
			{
				cout<<count[k]<<" ";
			}
			
		}
		cout<<endl;
	}
	
	return 0;
}
