#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int st,e,t,c,a[2600][2600],disc[6300];
bool flag[2600]={0};
void cini();
void spaf(int);
int main()
{
	cini();
	return 0;
} 
void cini()
{
	cin>>t>>c>>st>>e;
	for(int i=1;i<=c;++i)
	{
		int x,y,z;
		cin>>x>>y>>z;
		a[x][y]=a[y][x]=z; 
	}
	spaf(st);
}
void spaf(int x)
{
	memset(disc,0x7f,sizeof(disc));
	queue<int> q;
	disc[x]=0;
	flag[x]=1;
	q.push(x);
	while(!q.empty())
	{
		int k=q.front();
		for(int i=1;i<=t;++i)
		{
			if(a[k][i]>0 &&disc[i]>disc[k]+a[k][i])
			{
				disc[i]=disc[k]+a[k][i];
				if(flag[i]==0)
				{
					flag[i]=1;
					q.push(i);
				}
			}
		}
		flag[q.front()]=0;
		q.pop();
	}
	//for(int i=1;i<=t;++i)
//	cout<<disc[i]<<' ';
	cout<<disc[e]<<endl;
}
