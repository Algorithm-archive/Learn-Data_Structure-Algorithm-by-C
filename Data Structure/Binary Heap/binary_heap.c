//This is an implementation of Max Heap using Array

#include<stdio.h>

#define SZ 100

int getParentPos(int pos, int lastPos)
{
    if(pos<=0 || pos >= lastPos)
        return -1;

    return (int) (pos-1)/2;
}

int getLeftChildPos(int pos, int lastPos)
{
    int left = (2*pos) + 1;

    if(left >= lastPos)
        return -1;

    return left;
}

int getRightChildPos(int pos, int lastPos)
{
    int right = (2*pos) + 2;

    if(right >= lastPos)
        return -1;

    return right;
}

int getMaximum(int heap[], int lastPos)
{
    if(lastPos <= 0)
        return -1;

    return heap[0];
}

void swapElem(int heap[], int pos1, int pos2)
{
    int tmp;

    tmp = heap[pos1];
    heap[pos1] = heap[pos2];
    heap[pos2] = tmp;
}

void heapifyDown(int heap[], int pos, int lastPos)
{
    int heapSize = lastPos;
    while(1)
    {
        int left = getLeftChildPos(pos, heapSize);
        int right = getRightChildPos(pos, heapSize);
        int maxValPos;

        if(left != -1 && heap[left] > heap[pos])
            maxValPos = left;
        else
            maxValPos = pos;

        if(right != -1 && heap[right] > heap[maxValPos])
            maxValPos = right;

        if(maxValPos != pos)
        {
            swapElem(heap, pos, maxValPos);
        }
        else
            break;

        pos = maxValPos;
    }
}

void heapifyUp(int heap[], int lastPos)
{
    int pos = lastPos;
    while(pos>0)
    {
        int parent = getParentPos(pos, lastPos);
        if(parent == -1)
            break;

        if(heap[parent] < heap[pos])
        {
            swapElem(heap, parent, pos);
            pos = parent;
        }
        else
            break;
    }
}


int main()
{
    int heap[SZ];
    int value, num_of_elem = 0, action;

    while(1)
    {
        printf("Enter Action: \n 1.Insert \n 2.Get Max Value \n 3.Exit\n");
        scanf("%d", &action);

        if(action == 1) //Insertion
        {
            printf("Enter Value: ");
            scanf("%d", &value);
            heap[num_of_elem] = value;

            heapifyUp(heap, num_of_elem);
            num_of_elem++;
        }
        else if(action == 2) //Get and Delete Max Value
        {
            if(num_of_elem <= 0)
            {
                printf("No Elements Available\n");
                continue;
            }

            int maxVal = getMaximum(heap, num_of_elem);
            heap[0] = heap[num_of_elem - 1];

            printf("Max Val: %d\n", maxVal);
            num_of_elem--;

            heapifyDown(heap, 0, num_of_elem);
        }
        else
            break;
    }

    return 0;
}
