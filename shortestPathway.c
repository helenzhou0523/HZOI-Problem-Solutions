#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
int n,m,a,b,num;
double though[2010][2010],disc[2010],money_;
bool flag[2010];
void cini();
void work(int );
int main()
{
	cini();
    work(a);
    printf("%0.8f",100/disc[b]);
    return 0;
}
void cini()
{
	cin>>n>>m;int x,y;
	double z;
	for(int i=1;i<=m;++i)
	{
	     cin>>x>>y>>z;
	     though[x][y]=z/100;
	     though[y][x]=though[x][y];
	}
	cin>>a>>b;
}
void work(int x)
{
    double min;
	int k;
	flag[x]=true;
	for(int i=1;i<=n;++i)
	{
		if(though[x][i]!=0)
		disc[i]=1-though[x][i];
		else disc[i]=-1;
	}
	disc[x]=1 ;
	for(int j=1;j<=n-2;++j)
	{
		min=0;
		for(int i=1;i<=n;++i)
		{
			if(flag[i]==false&&disc[i]>0&&disc[i]>min)
			{
				min=disc[i];k=i;
				//cout<<k<<' '<<min<<endl;
			}
		}
		flag[k]=true;if(k==b)break;
		for(int i=1;i<=n;++i)
		{
			//cout<<i<<' '<<disc[i]<<endl;
			if(!flag[i] && though[k][i]>0&&disc[i]<disc[k]*(1-though[k][i]))
			{
				disc[i]=disc[k]*(1-though[k][i]);
				//cout<<i<<' '<<disc[i]<<endl;
			}
		}
	}
}
