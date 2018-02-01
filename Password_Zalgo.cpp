#include<bits/stdc++.h>
using namespace std;
int zSolution(string s)
{
	int len = s.length();
	int zArr[len];
	int l=0,r=0;
	for(int i=1;i<len;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<len && s[r-l]==s[r]) r++;
			zArr[i] = r-l;
			r--;
		}
		else{
			int k = i-l;
			if(zArr[k]<r-i+1)
			   zArr[i] = zArr[k];
			   else
			   {
			   	l=i;
			   	while(r<len && s[r-l]==s[r]) r++;
			   	zArr[i] = r-l;
			   	r--;
			   }
		}
	}
	int maxz = 0,res = 0;
	for(int i=1;i<len;i++)
	{
		if(maxz >= len-i && zArr[i] == len-i ) {
			res = len -i;
			break;
		}
		else
		maxz = max(maxz,zArr[i]);
	}
	return res;
}
int main()
{
	string s;
	cin>>s;
	int ans = zSolution(s);
	if(ans!=0)
	{
	
	string passWord(s,0,ans);
	
	cout<<passWord;
	}
	else
	{
		cout<<"Just a legend";
	}
	return 0;
}
