#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<set>
#include<vector>
#define ll long long
using namespace std;
int main()
{
	int a[6]={-22,11,3,-1,-5,8};//c[1]=-2;c[2]=11;c[3]=11-4=7;c[4]=20;c[5]=15;c[6]=13;
	int *s1=a;
	int c[6]={0};
	int temp1=0;
	int temp2=0;
	int i;
	int j;
	for(i=0;i<6;i++,j++)
	{
		
			if(j==0)
			{
				c[i]=a[j];
			}
			if(j>=1){
			if(c[j-1]+a[j]>=a[j])
			{
				c[i]=c[j-1]+a[j];
				
			}
			else
			{
				c[i]=a[j];
				
			}
		}
		
		
		
		if(temp2<c[i])
		{
			temp2=c[i];
		}
	}
	printf("%d",temp2);
 } 
