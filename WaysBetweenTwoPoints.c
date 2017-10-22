#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

long long n,m,x,y,f[1010][1010],dx[10]={-2,-1,1,2,-2,-1,2,1},dy[10]={-1,-2,-2,-1,1,2,1,2};
bool flag[1010][1010]={0};

void cini();
int main()
{
	cini();
	
	for(int i=0;i<=n;++i)
	{
		for(int j=0;j<=m;++j)
		{
			if(flag[i][j]==0)
			{
				if(i-1>=0 && j-1>=0)
				f[i][j]=f[i-1][j]+f[i][j-1];
				if(i-1<0 && j-1>=0)
				f[i][j]=f[i][j-1];
				if(j-1<0 && i-1>=0)
				f[i][j]=f[i-1][j];
				//fl[jag[i][j]=1;
			}
			//else f[i][j]=0;
			//cout<<f[i][j]<<' ';
		}
		
	}	/*cout<<endl;
		for(int i=0;i<=8;++i)
		{
			for(int j=0;j<=8;++j)
			cout<<f[i][j]<<' '; 
			cout<<endl;
		}	*/
	cout<<f[n][m]<<endl;
	return 0;
}
void cini()
{
	cin>>n>>m>>x>>y;
	flag[x][y]=1;
	for(long long i=0;i<8;++i)
	flag[dx[i]+x][dy[i]+y]=1;
	for(long long i=0;i<=8;++i)
	f[i][0]=f[0][i]=1;
	for(int i=0;i<=n;++i)
	{
		if(flag[i][0]==1)
		{
			for(int j=i;j<=8;++j)
			f[j][0]=0;
		}		
	}
	for(long long i=1;i<=m;++i)
	{
		if(flag[0][i]==1)
		{
			for(int j=i;j<=8;++j)
			f[0][j]=0;
		}
	}
	/*for(int i=0;i<=8;++i)
		{
				for(int j=0;j<=8;++j)
			{
				cout<<flag[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;*/
}
