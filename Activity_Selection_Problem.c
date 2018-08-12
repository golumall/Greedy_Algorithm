#include<stdio.h>
int main()
{
	int n,i,j,temp;
	scanf("%d",&n);
   int s[n],f[n];
   //Start time of Activity
   for(i=0;i<n;i++)
   {
   	scanf("%d",&s[i]);
   }
   //Finish Time of Activity
   for(i=0;i<n;i++)
   {
   	scanf("%d",&f[i]);
   }
   //Sort activity according finish time
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(f[i]>f[j])
  		{
  			temp=f[i];
  			f[i]=f[j];
  			f[j]=temp;
  			temp=s[i];
  			s[i]=s[j];
  			s[j]=temp;
  		}
  	}
  }
  temp=1;j=0;
for(i=1;i<n;i++)
{
  if(s[i]>=f[j])
  {
    temp++;
    j=i;
  }
}
printf("%d",temp);
	return 0;
}
