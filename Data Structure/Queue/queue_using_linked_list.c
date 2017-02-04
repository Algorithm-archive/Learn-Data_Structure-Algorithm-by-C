#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int val;
	struct node* next;
}node;

node* head = NULL;
node* tail = NULL;

void printlist()
{
	node* temp;
	temp=head;

    if(temp != NULL)
    {
        printf("Queue Elements are: ");
        while(temp!=NULL)
        {
            printf("%d ",temp->val);
            temp=temp->next;
        }
        puts("");
    }
}

int peek()
{
    return head->val;
}

int isEmpty()
{
    return (head == NULL);
}

void enqueue(int x)
{
    node* temp=(node*) malloc(sizeof(node));
    temp->val=x;
    temp->next=NULL;

	if(isEmpty())
	    head = temp;

	if(tail != NULL)
        tail->next = temp;

    tail = temp;
}

void dequeue()
{
	if(isEmpty())
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted item is: %d\n",peek());
		node* temp = head;

		head=head->next;
		temp->next=NULL;
		if(head == NULL)
            tail = NULL;
		free(temp);
	}
}

int main()
{

    int action, val;
    int exit = 0;

  	while(!exit)
  	{
  	    printf("Enter your choice:\n");
  	    printf("1. Enqueue\n2. Dequeue\n3. Exit\n");
  	    scanf("%d", &action);

        switch(action)
        {
          case 1:
              scanf("%d", &val);

              enqueue(val);

              printlist();
              puts("");
              break;
          case 2:
              dequeue();

              printlist();
              puts("");
              break;
          case 3:
              exit = 1;
              break;
        }
  	}

	return 0;
}
