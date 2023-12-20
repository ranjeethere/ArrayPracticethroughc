//C program to Count the total number of duplicates element in the array
#include<stdio.h>
int main(){
    int a[1000],count = 0,n;
    printf("Enter the  number of elements in array \n :");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
    scanf("%d",&a[i]);
    }
    // duplicate array code
    for(int i=0;i<n;i++);
    {
        int i;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                count+1;
                break;

            }
        }
    }
    printf("%d",count);

}