#include<iostream>
#include<cstring>
using namespace std;
bool flag[110]; 
int a[110][110],n,e,i=1,k,m;;
void dfs(int );
int main()
{
	cin>>n>>e;
	memset(a,0,sizeof(a));
	memset(flag,0,sizeof(flag));
	while(i<=e)
	{
		cin>>k>>m;
		a[k][m]=1;
		a[m][k]=1;
		i++;
	}
	dfs(1);
	return 0;
}
void dfs(int x)
{
	cout<<x<<' ';
	flag[x]=true;
	for(int i=1;i<=n;++i)
	{
		if(flag[i]==false&&a[x][i]==1)
		dfs(i);
	}
}
