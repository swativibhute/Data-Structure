#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *top=0;
// top=0;
// void push(int x);
void push();
void pop();
void display();

void push()
{
    int x;
    printf("values to be insert:");
    scanf("%d",&x);
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    printf("enterd data will be:%d\n",newnode->data);
}
void pop()
{
    struct node *temp;
        temp=top;
    if(top==0)
    {
        printf("\nlinked list is empty.");
    }
    else
    {       
        printf("\n poped element will be :%d",temp->data);  
        top=temp->next;
        // free(temp);
    }
}
void display()
{
    if(top==0)
    {
        printf("\n stack using linked list is empty.");
    }
    else{
        struct node *temp;
        temp=top;
        while(temp!=0)
        {
            printf("\n values in stack using linked list: %d",temp->data);
            temp=temp->next;
        }
        
    }    
}
int main(){
    int choice,x;
    printf("\n###....MENU....###\n");
    printf("\n1.push..\n2.pop..\n3.display...");
    
    do
    {     
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    // printf("value to be insert:");
                    // scanf("%d",&x);
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
        
         default:
              break;
        }
    } while(choice<4);
    // push(3);
    // push(4);
    // push(5);
    // display();
    // pop(4);
    return 0;
    
}