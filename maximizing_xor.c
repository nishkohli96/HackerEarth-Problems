
/*
  C Program to find the maximum value of XOR function between two
  given numbers.
*/

#include<stdio.h>
#include<stdlib.h>

int xorfn(int a,int b)
 {
   return a^b;
  }
int main()
{
  int max=0,n,m;
  printf("\n Enter two numbers : ");
  scanf("%d %d",&n,&m);
  int i,j;

  for(i=n;i<m;i++)
   {
     for(j=i+1;j<=m;j++)
      {
       if(max < xorfn(i,j))
         max=xorfn(i,j);
      }
   }

 printf("\n Maximun XOR Value is : %d",max);
}
