#include <stdio.h>

//Following function will sort the array in Increasing (ascending) order
void selection_sort(int arr[], int n)
{
    int i, j, tmp;

    /* advance the position through the entire array */
    /*   (could do i < n-1 because single element is also min element) */
    for (i = 0; i < n-1; i++)
    {
        // find the min element in the unsorted a[i .. n-1]

        int current_Min = i; // assume the min is the first element
        // test against elements after i to find the smallest
        for ( j = i+1; j < n; j++)
        {
            // if this element is less, then it is the new minimum
            if (arr[j] < arr[current_Min]) //To sort in decreasing order just change the comparison operator to '>'
            {
                current_Min = j; // found new minimum; remember its index
            }
        }

        if(current_Min != i) //if the current_Min is equal to i, then it is in right position already
        {
            //Swap the values
            tmp = arr[i];
            arr[i] = arr[current_Min];
            arr[current_Min] = tmp;
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

    selection_sort(arr, num_of_element);

    printf("Sorted list in ascending order: \n");
    print_list(arr, num_of_element);

    return 0;
}
