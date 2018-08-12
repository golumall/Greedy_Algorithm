import java.io.IOException;
import java.util.Scanner;
class Greedy_Knapsack_Problem
{
   public static void main(String[] args) {
   		Scanner sc=new Scanner(System.in);
   		int i,j=0,m;
   		float sum=0,max=0;
   		//Number of Item
   		int n=sc.nextInt();
   		int a[][]=new int [2][n];
   		//weight in Knapsack
        for(i=0;i<n;i++)
        {
        	a[0][i]=sc.nextInt();
        }
        //Value in Kanpsack
        for(i=0;i<n;i++)
        {
        	a[1][i]=sc.nextInt();
        }
        //Max Weight of Knapsack
        m=sc.nextInt();
        while(m>=0)
        {
            max=0;
            for(i=0;i<n;i++)
            {
            	if(((float)a[1][i]/((float)a[0][i]))>max)
            	{
            		max=((float)a[1][i]/((float)a[0][i]));
            		j=i;
            	}
            }
            if(a[0][j]>m)
            {
            	sum+=m*max;
            	m=-1;
            }
            else
            {
            	sum+=a[1][j];
            	m-=a[0][j];
            	a[1][j]=0;
            }
        }
        System.out.println(sum);
        
   	}	
}
