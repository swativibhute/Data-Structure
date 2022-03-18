#include<stdio.h>
#define max 5
int stk[max];
int top=-1,ch,x;

void push();
void pop();
void display();


int main(){

//    clrscr();
   printf("1.push\n2.pop\n3.display.\n");
   do
   { 
       printf("Enter choice:\n");
       scanf("%d",ch);
       switch(ch)
       {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(ch!=4);
    return 0;
   
}
void push()
{
    if(top==max-1)
    {
        printf("\nSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stk[top]=x;
    }
}
void pop(){
    int ele;
    if(top==-1){
        printf("Uderflow");
    }
    else{
        ele=stk[top];
        top--;
        printf("poped element are %d \n",ele);
    }
}
void display(){
    for (int i = top; i >=0 ; i++)
    {
        printf("%d",stk[i]);
    } 
}

