
#include<stdio.h>
#include<stdlib.h>

void main()
{
 int n,i,k,res=0;
 printf(" PROBLEM  STATEMENT : To find the min number of magic beverages a man must
       drink to  jump the hurdles to finish the race.He can jump to a max height of k
        and need to drink a magic beverage to increase his jump height  by 1.\n\n");
 printf("\n Enter the number of hurdles and max height :");
 scanf("%d %d",&n,&k);
// array for hurdles height
 int a[n];
printf("\n Enter the heights of hurdles \n");

for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
 {
 if(a[i]>k)
  {
    res+=a[i]-k;
    k+=a[i]-k;
  }
 }

printf("\n The minimum number of magic beverages is %d : ",res);
}
