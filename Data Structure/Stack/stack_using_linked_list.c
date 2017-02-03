#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int val;
	struct node* next;
}node;

node* top = NULL;

void push(int value)
{
	node* tmp=(node*) malloc(sizeof(node)); //memory allocating for a node

	tmp->val = value;
	tmp->next = top; //add this new value at the end of the stack

	top = tmp; //now top of the stack is the new node
}

void pop()
{
	node* tmp;

	if(top==NULL)
		printf("Stack is empty\n");
	else
	{
		printf("popped element %d\n",top->val);
		tmp=top;

		top=top->next; //top is replaced to the next node

		free(tmp); //top node is deleted from the memory
	}
}

int peek()
{
    if(top != NULL)
        return (int)top->val;

    return top;
}

int main()
{
	int action,value;
	int exit = 0;

	while(!exit)
	{
	    printf("Enter Action: \n 1.Insert \n 2.Get Top Value \n 3.Exit\n");
	    scanf("%d",&action);

		switch(action)
		{
            case 1:
                printf("Enter Value: ");
                scanf("%d",&value);

                push(value);

                printf("Element at top of the stack: %d\n", peek());

                break;
            case 2:
                pop();

                break;
            case 3:
                exit = 1;
                break;
		}
	}

	return 0;
}
