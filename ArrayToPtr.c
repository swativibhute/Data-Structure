#include<stdio.h>
int main(){
    int a[5];
    int *ptr;
    ptr=&a[0];
    for (int i = 0; i < 5; i++)
    {
         printf("enter array element %d \n:" ,i+1);
         scanf("%d",ptr);
         ptr++;       
    }
    printf("\n Array elements are:");
    for (int i = 0; i < 5; i++)
    {
        //  printf("%d\n",*ptr);
        //  ptr++;
        printf("%d\n",a[i]);
        // printf("%d\n",*(a[i]));
    }
    
}