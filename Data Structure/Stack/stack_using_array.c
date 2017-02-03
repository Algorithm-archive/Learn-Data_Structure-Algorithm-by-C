#include <stdio.h>

#define MAXSIZE 100

int stack[MAXSIZE];
int top = -1;

int isEmpty()
{
  return (top == -1); //if top is -1 return 1 else return 0
}

int isfull()
{
  return (top == MAXSIZE); //if top is equal to MAXSIZE return 1 else return 0
}

int peek()
{
  int data = -1;
  if(!isEmpty())
    data = stack[top];

   return data;
}

int pop()
{
  int data = peek();

  if(data != -1)
    top--;

   return data;
}

void push(int data)
{
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   }
   else
   {
     printf("Could not insert data, Stack is full.\n");
   }
}

int main()
{

  int value, action;

  while (1) {
    printf("Enter Action: \n 1.Insert \n 2.Get Top Value \n 3.Exit\n");
    scanf("%d", &action);

    if(action == 1) //Insertion
    {
        printf("Enter Value: ");
        scanf("%d", &value);

        push(value);

        printf("Element at top of the stack: %d\n", peek());
    }
    else if(action ==2)
    {
      value = pop();
      if(value == -1)
        printf("Could not retrieve data, Stack is empty.\n");
      else
        printf("Popped value: %d\n", value);
      }
    else
      break;
  }

   return 0;
}
