//C program to find the sum of two matrix of order of 2*2. 22/11
#include<stdio.h>
int main()
{
   int a[2][2],b[2][2],sum[2][2]; 
   //input the value of first matrix :
   printf("\nEnter the value of first matrix :\n");
   for(int i = 0;i < 2;i++){

   for(int j =0;j<2;j++){
      printf("Input the value[%d][%d] =  ",i,j);
      scanf("%d",&a[i][j]);

   }
   }
  // Taking input of 2nd matrix
  printf("\nenter the value of seconf matrix :\n");
    for(int i = 0;i < 2;i++){

   for(int j =0;j<2;j++){
      printf("Input the value[%d][%d] =  ",i,j);
      scanf("%d",&b[i][j]);

   }
   }

    for(int i = 0;i < 2;i++){

   for(int j =0;j<2;j++){
      sum[i][j] = a[i][j]+b[i][j];
   }} 
 for(int i = 0;i < 2;i++){

   for(int j =0;j<2;j++){
      printf(" %d \t",sum[i][j]);

      
   }
   printf("\n");}
   return 0;
    
}