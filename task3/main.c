
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int l;
int main()
{


    int i,j,q ;
    int min = 45, max = 360;
start:
    printf("enter the size of square matrix: ");
    scanf("%d", &l );
    if ((l > 0) && (l <= 100))
       {
           printf("\n\n");
           printf("you have entered %d\n", l);
        } else
        { printf("\n\n");
            printf("you have entered character or more than 100\n"); }

            printf("\n\n");
    printf("Random number from 45 to 360\n ");
    int a[l][l];

    for (i = 0; i < l; i++){
        for (j = 0; j < l; j++){
            a[i][j] = (rand()%(max+1-min))+min;

        }
    }
    displaymatrix(a);

   //biggestelementswap1(a);

   biggestelementswap2(a);

    printf("\nDo you want to restart program, If yes press 1 else press 2:");
        scanf("%d",&q);
        if(q==1){
            goto start;
        }else if(q==2){
    return 0;
    }
}

    void displaymatrix(int mat[l][l]){

        printf("------------------------------------\n");
        for(int i = 0; i < l; i++){
            for(int j = 0; j < l; j++){
                 printf("  %2d  ", mat[i][j]);

            }printf("\n\n");
        }
        printf("------------------------------------\n");
    }


 void biggestelementswap1(int mat[l][l]){
              int largrowloc, largcolumnloc, temp,swapped;
              int largest=mat[0][0];
                        for(int i=0;i<l;i++){
                            for(int j=0;j<l;j++) {
                                if(largest<mat[i][j]){
                                    largest=mat[i][j];
                                    largrowloc=i+1;
                                    largcolumnloc=j+1;
                                }
                                if(i==j){
                                    mat[i][j] = largest;
                                }
                            }
                      }
            printf("\n\n");
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
            printf("       Largest element in array is %d in location arr[%d][%d]\n",  largest, largrowloc, largcolumnloc);
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");

            for(int i = 0; i < l; i++){
                for(int j = 0; j < l; j++){
                        if(i==j){
                            mat[i][j] = largest;
                        }
                }
            }
        printf("\n\n");

        printf("------------------------------------\n");
        for(int i = 0; i < l; i++){
                for(int j = 0; j < l; j++){
                    printf("  %d", mat[i][j]);
                }printf("\n\n");
        }
       printf("-----------------------------------\n");
}





void biggestelementswap2(int mat[l][l]){
              int largrowloc, largcolumnloc, temp,swapped;
              int largest=mat[0][0];
                        for(int i=0;i<l;i++){
                            for(int j=0;j<l;j++) {
                                if(largest<mat[i][j]){
                                    largest=mat[i][j];
                                    largrowloc=i+1;
                                    largcolumnloc=j+1;
                                }

                            }
                      }
            printf("\n\n");
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");
            printf("       Largest element in array is %d in location arr[%d][%d]\n",  largest, largrowloc, largcolumnloc);
            printf("*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n");

            for(int i=0;i<l;i++){
                for(int j=0;j<l;j++) {
                        if(mat[i][j]==mat[0][0]){
                            temp=mat[i][j];
                            mat[i][j] = largest;
                            largest=temp;
                        }
                }
            }


        printf("\n\n");

        printf("------------------------------------\n");
        for(int i = 0; i < l; i++){
                for(int j = 0; j < l; j++){
                    printf("  %d", mat[i][j]);
                }printf("\n\n");
        }
       printf("-----------------------------------\n");
}











