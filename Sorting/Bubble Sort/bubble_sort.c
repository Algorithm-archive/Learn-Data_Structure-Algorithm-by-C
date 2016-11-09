#include <stdio.h>

//Following function will sort the array in Increasing (ascending) order
void bubble_sort(int arr[], int n)
{
    int i, j, tmp;
    for(i = 0; i < n-1; i++)
    {
        // Last i elements are already in place, so the inner loops will run until it reaches the last i elements
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) //To Sort in decreasing order, change the comparison operator to '<'
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

//Following is a slightly modified bubble sort function, which tracks the list with a flag to check if it is already sorted
void modified_bubble_sort(int arr[], int n)
{
    int i, j, tmp;
    for(i = 0; i < n-1; i++)
    {
        int flag = 0; //Taking a flag variable
        // Last i elements are already in place, so the inner loops will run until it reaches the last i elements
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) //To Sort in decreasing order, change the comparison operator to '<'
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;

                flag = 1; //Setting the flag, if swapping occurs
            }
        }

        if(!flag) //If not swapped, that means the list has already sorted
        {
            break;
        }
    }
}

void print_list(int arr[], int num_of_element)
{
    int i;
    for(i = 0; i < num_of_element; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[] = {43, 1, 24, 56, 30, 5};
    int num_of_element = sizeof(arr)/sizeof(int);

    printf("Initial List:\n");
    print_list(arr, num_of_element);

    bubble_sort(arr, num_of_element);
    //modified_bubble_sort(arr, num_of_element);

    printf("Sorted list in ascending order: \n");
    print_list(arr, num_of_element);

    return 0;
}
