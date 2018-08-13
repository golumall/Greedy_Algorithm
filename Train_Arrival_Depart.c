#include<stdio.h>
int main()
{
   int n,i,j=0,temp,max=0;
   scanf("%d",&n);
   int a[2][n+n];
//arrival time + Depart time
for(i=0;i<(n+n);i++)
{
 scanf("%d",&a[0][i]);
 if(i<n)
 	a[1][i]=1;
 else
 	a[1][i]=-1;
}


for(i=0;i<(n+n);i++)
{
for(j=i+1;j<(n+n);j++)
{
	if(a[0][i]>a[0][j])
	{
		temp=a[0][i];
		a[0][i]=a[0][j];
		a[0][j]=temp;
		temp=a[1][i];
		a[1][i]=a[1][j];
		a[1][j]=temp;
	}
}
}
temp=0;
for(i=0;i<(n+n);i++)
{
	temp+=a[1][i];
	if(temp>max)
		max=temp;
}
//Minimum Platform Required for Trains
printf("%d",max);
return 0;
}
