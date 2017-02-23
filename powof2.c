
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int ispowof2(int n)
{
  int i=0,flag=0;
  while(1)
  {
    if(pow(2,i)==n)
     {
       return flag=1;
     }
     else
      if( pow(2,i)>n)
       return flag=0;
      i++;
  }
  return flag;
}

int SubNearestPow2(int n)
{
  int i=0;
  while( n - pow(2,i) > 0)
  {
    i++;
  }
  return n-pow(2,i-1);

}



int main()
{
  int i,t;
  printf("\n  PROBLEM STATEMENT -
  Louise and Richard play a game. They have a counter set to N.
  Louise gets the first turn and the turns alternate thereafter.
  In the game, they perform the following operations.

  1. If N is not a power of 2, reduce the counter by the largest power of 2 less than N.
  2. If N is a power of 2, reduce the counter by half of N.
  3. The resultant value is the new N which is again used for subsequent operations.
  4. The game ends when the counter reduces to 1, i.e., , and the last person to make a valid move wins.

   Given N , your task is to find the winner of the game.
  ");
  printf("\n Enter the number of test cases : ");
  scanf("%d",&t);

  for(i=0;i<t;i++)
  {
  int turns=0,counter;
  printf("\n Enter the counter value : ");
  scanf("%d",&counter);

  while( counter != 1)
    {
      if(ispowof2(counter) ==0)
      {
        counter=SubNearestPow2(counter);
        turns++;
      }
      if(ispowof2(counter) == 1)
        {
          counter=counter/2;
           turns ++;
        }
    }
if(turns %2 == 0)
  printf("Richard\n");
else
  printf("Louise\n");
}
  return 0;
}
