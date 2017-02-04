#include<stdio.h>
#define MAXSIZE 100

int arr[MAXSIZE], last = 0;

int isEmpty()
{
    return (last<=0); //If last is reached to 0, then it is empty, return 1 else return 0
}

int isFull()
{
    return (last>=MAXSIZE); //If last reached MAXSIZE then it is full, return 1, else return 0
}

int peek()
{
    return arr[0];
}

void enqueue(int val)
{
    if(isFull())
        printf("No more space on Queue.\n");
    else
        arr[last++]=val;
}

void dequeue()
{
    int i;

    if(isEmpty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Removed element: %d\n",peek());
        //Shift All element left
        for(i=1;i<last;i++)
            arr[i-1] = arr[i];
        last--;
    }
}

void printlist()
{
    int i;
    if(last > 0)
    {
        printf("Queue Elements: \n");
        for(i=0;i<last;i++)
            printf("%d ",arr[i]);
        puts("");
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
