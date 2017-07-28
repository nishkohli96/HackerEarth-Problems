

/* 
  Java Program to find all prime numbers less than a given number,then concatenate two of them at a time
  to see if the resultant number is also prime.
*/

import java.util.Scanner;
import java.io.*;
public class concat_prime
{
    public static boolean isprime(int n)
    {
      int i,flag=0;
      for(i=2;i<=Math.sqrt(n);i++)
      {
          if(n%i ==0)
              flag=1;
      }
      if(flag==0)
          return true;
          return false;      
     }
    
    
public static void main(String arg[])
{
int n,count=0,prime=0,fcount=0;
Scanner ob = new Scanner(System.in);
System.out.println("\n Enter the limit : ");
n=ob.nextInt();
int arr[]=new int[100];
int k=0;
int i,j,l=0,r;

System.out.println("The Prime numbers are : ");

for(i=1;i<n;i++)
{ 
     for(j=1;j<=i;j++)
   {
        if(i%j==0)
       {   
           count++;
            }
    }
       if(count==2)
       {  arr[k++]=i;
          prime++;
       }
  
  if(prime==n)
  break;
  else
  count=0;
}
 for(i=0;arr[i]!='\0';i++)
 {
   System.out.print(arr[i]+" ");
   l++;
 }
 System.out.println();
   System.out.println("The concatenated prime numbers are : ");
   String qwe;
   System.out.println();
   for(i=0;i<l-1;i++)
    {
      for(j=i+1;j<l;j++)
      {
        qwe=Integer.toString(arr[i])+Integer.toString(arr[j]);
        r=Integer.parseInt(qwe);
        if(isprime(r))
        {
         System.out.println(r);
         fcount++;
        } 
        
        qwe=Integer.toString(arr[j])+Integer.toString(arr[i]);
        r=Integer.parseInt(qwe);
        if(isprime(r))
        {
         System.out.println(r);
         fcount++;
        } 
        
      }
     }
 System.out.println(fcount+" Prime numbers ");
}
}


