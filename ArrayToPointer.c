#include<stdio.h>
int main(){
    int a=2;
    int *ptr=&a;
    printf("%u\t",*ptr);
    printf("%u\n",ptr);
    printf("%u",ptr+1);
  
    // printf("the values in the array are \n:");
    // for (int i = 0; i <= 5; i++)
    // {
    //     scanf("%d",a[i]);
    //     // ptr++;
    //     // 
    // }
    // for (int i = 0; i <= 5; i++)
    // {
    //     // scanf("%d",ptr);
    //     printf("the values in the array are %d\n:",a[i]);
    // }
    
}