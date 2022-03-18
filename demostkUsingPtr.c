#include<stdio.h>
// #include<conio.h>

#define max 5

void push(int);
void pop();
void display();

int stack[max], top = -1;

void main()
{
   int value, choice;
//    clrscr();
   while (1)
   {
      //   printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         printf("Enter the value to be insert: ");
         scanf("%d", &value);
         push(value);
         break;
      case 2:
         pop();
         break;
      case 3:
         display();
         break;
      case 4:
         exit(0);
      default:
         printf("invalid choice.");
      }
   }
}
void push(int value){
   if(top == max-1)
      printf("\nStack is Full!\n");
   else{
      top++;
      stack[top] = value;
      printf("\nInsertion success!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!");
   else{
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}