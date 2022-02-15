/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{ //double y;
 float x,y, a,b;
int q;
 
    start:
    printf("Input number x\n" );
    scanf("%f",&x);
    
    
    printf("\nYour Number is :");
    printf("%f",x);
    int z =abs(x);
    
    a =3*x*x+(5*z);
     printf("\nThe Value of a:" );
    printf("%f",a);
    
    if((2+3*x)==0){
        printf("\n The Value of b:x cannot be equal to -0.666666");
    }else{
    b =(9)/(2+3*x);
    printf("\nThe Value of b:" );
    printf("%f",b);
    }
 
    
   
    
    if((2+3*x)==0){
        printf("\n The Value of b:x cannot be equal to not define");
      }else if((a-b)>0){
           y=a-2*a*a+b;
         printf("\nThe Value of y:" );
         printf("%f",y);
          }else{
    
       y =((2*b)/5)-((2*a*a)/7);
             printf("\nThe Value of y:" );
             printf("%f",y);
        }
        
        printf("\nDo you want to restart program, If yes press 1 else press 2:");
        scanf("%d",&q);
        if(q==1){
            goto start;
        }else if(q==2){
            
        
    
    
  
     
    return 0;
        }
}
