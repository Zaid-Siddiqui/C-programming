/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int x,y,sum,i;
    int count=0;
    printf("Input two numbers\n" );
    scanf("%d",&x);
    scanf("%d",&y);
    
    printf("two numbers are\n");
    printf("%d\n",x);
    printf("%d\n",y);
    
    sum =x+y;
    printf("Sum is =%d",sum);
    
    if(sum<20)
    { 
        if(sum%2==0){
           printf("\nodd NUmbers are:%d",sum/2); 
        }
        else {
            printf("\nodd NUmbers are:%d",(sum+1)/2); 
        }
    } else  {
        
        printf("\nNumbers divisible by 7 are =%d",((sum-20)/7)+1);
        
    }
     
         
     
    

    return 0;
}