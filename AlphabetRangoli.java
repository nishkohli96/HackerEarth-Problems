

package javaapplication1;

import java.util.Scanner;

public class AlphabetRangoli{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      
        Scanner ob=new Scanner(System.in);
        int n,i,j,k,l=0,m;
        System.out.println(" Alphabet Rangoli ");
        System.out.println(" Display a result something like this :");
        System.out.println("----c----\n" +
"--c-b-c--\n" +
"c-b-a-b-c\n" +
"--c-b-c--\n" +
"----c----");
        System.out.println("Enter the number of letters (<=26) : ");
        n=ob.nextInt();
        k=(4*n)-3;   //Number of columns
        m=2*n-1;  // Number of rows
        char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        char [][] array = new char [m][k];
        
        
        // Initializing the array with blank lines 
        
        for(i=0;i<m;i++)
        {
        for(j=0;j<k;j++)
        {
        array[i][j]='-';
        }
                }
        for(i=0;i<m;i++)
        {
        for(j=0;j<k;j++)
        {
           if(n-i-1  >= 0)
            array[i][k/2]=arr[n-i-1];  //Middlemost element in each row
            for(l=1;l<=i;l++)
            {
                if(k/2-2*l >=0 && n-i+l-1 >=0)
                {
                array[i][k/2-2*l]=arr[n-i+l-1];
                array[i][k/2+2*l]=arr[n-i+l-1];
                }           
       }
        }
        }
       
        // Mirror image of the uppermost triangle
        
        for(i=0;i<m;i++)
        {
        for(j=0;j<k;j++)
        {
           array[m-i-1][k-j-1]=array[i][j]; 
        }
        }
    
       for(i=0;i<m;i++)
        {
        for(j=0;j<k;j++)
        {
            System.out.print(array[i][j]);
        } 
         System.out.print("\n");
        
    }
    }
}
