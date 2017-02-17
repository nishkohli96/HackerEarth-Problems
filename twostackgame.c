
/*
   C Program to find the maximun number of elements you can pop from the
   start of the array such that the sum of the elements popped doesnt
   exceed the givem sum
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int no_of_games;
 scanf("%d",&no_of_games );
 int i,stack1_size,stack2_size,j;

 for(i=0;i<no_of_games;i++)
  {
   printf("\n How many numbers for each stack ?\n");
   scanf("%d\t%d",&stack1_size,&stack2_size);

   int a[stack1_size],b[stack2_size];
   int max_sum,sum=0,max_numbers_popped=0;

   printf("Enter the maximun sum ");
   scanf("%d",&max_sum);

   printf("\n Enter elements of 1st Array \n");
   for(i=0;i<stack1_size;i++)
    {
    scanf("%d",&a[i]);
    }

    printf("\n Enter elements of 1st Array \n");
    for(i=0;i<stack2_size;i++)
     {
       scanf("%d",&b[i] );
     }

     i=0;
     j=0;

     while(i<stack1_size || j<stack2_size)
      {
          // Getting the least number from the 2 stacks

       if(a[i]>b[j])
        {
          sum=sum+b[j];
          j++;
        }
        else
        {
           sum=sum+a[i];
           i++;
        }
           if(sum <=max_sum)
             {
               max_numbers_popped++;
             }
            else break;

      }

    printf("\n%d",max_numbers_popped);

  }

}
