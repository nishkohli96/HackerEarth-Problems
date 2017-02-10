

#include<stdio.h>

void main()
{
  int n,i;
  printf("\nHow many numbers :");
  scanf("%d",&n);
  int a[n];
  printf("\n Enter the numbers :");
  
  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

 int largest,seclargest;
 largest=a[0];
 
 for(i=1;i<n;i++)
  {
  if(a[i] >largest)
    {
    largest=a[i];
    }
  }
 printf("\n The largest number is : %d",largest);
 
 seclargest=-999;
 
 for(i=0;i<n;i++)
  {
  if(a[i] > seclargest && a[i] < largest )
    {
      seclargest=a[i];
    }
  }
 printf("\n The Second largest number is : %d\n",seclargest);

}  
  
