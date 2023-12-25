#include<stdio.h>
int main()
{
  int a1[6],a2[6],a3[6],n,j,k;
  printf("enter the number of the elements to print max 6: ");
  scanf("%d",&n);
  
      printf("enter the array elements limits 6");
  for(int i =0; i<=n;i++)
  {
    printf(" Enter %d -",i);
    scanf("%d",&a1[i]);
  }
 
//even element 
for(int i = 0;i<=n;i++)
{
    if(a1[i]%2==0){
    a2[j]= a1[i];
    j++;}
    else{
        a3[k]=a1[i];
        k++;
    }
    
    
}
printf("/n Printing even number:/n");
 for(int i = 0;i<j;i++){
    printf("Even elements are :%d",a2[j]);
 }  

 printf("/n Printing odd number :/n");
 for(int i =0;i<k;i++)
 {
    printf("odd elements are : %d",a3[k]);

 }  
 printf("/n/n");
 return 0;
}

