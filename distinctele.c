
#include<stdio.h>

void main()
{
  int n,i,j,count=0,flag=0;
  printf("\nHow many numbers :");
  scanf("%d",&n);
  int a[n];
  printf("\n Enter the numbers :");
  
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   
   for(i=0;i<n;i++)
     {
       flag=0;
       for(j=0;j<n;j++)
           {
            if(j!=i)
             {
             if(a[i]== a[j]) 
                flag=1;        
             }  
          }   
     if(flag==0)
     count++;
     }
   printf("\n Array has %d distinct elements\n ",count);
 }     
     
