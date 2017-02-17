
/*
 C Program to calculate the number of times a person beat her previous score
 and the number of times she scored less than her worst score.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,best,least,nbest=0,nleast=0;
    printf("\n Enter how many matches : ");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter scores : ");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    least=a[0];best=a[0];
    for(i=1;i<n;i++)
        {
        //Calculating how many times she played the most poorly
        if(a[i]<least)
            {
            nleast++;
            least=a[i];
            }

        // how many times she outbeat her  previous score
        if(a[i] >best)
            {
            nbest++;
            best=a[i];
           }
        }
    printf("%d\t%d",nbest,nleast);
    return 0;
}
