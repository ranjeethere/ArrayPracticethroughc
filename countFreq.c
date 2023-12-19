//writing a program to find out the frequency of elements that are available in array..
#include<stdio.h>
int main()
{
    int n,arr[10],i,key,freq =0;
    // Taking input of number of elements..
    printf("Enter the number of element :");
    scanf("%d",&n);
        for(int i =0;i<n;i++)
        {
            printf("array [%d] = ",i);
            scanf("%d",&arr[i]);
        }

 printf("Enter the number to find out the frequecy");
 scanf("%d",&key);
 for(int i =0;i<10;i++)
 {
    if(arr[i]==key)
    {
        freq++;
        printf("\nFrequency of %d is %d ",key,freq);
        return 0;

    }
 }

}