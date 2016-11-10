#include <stdio.h>

//Following function will sort the array in Increasing (ascending) order
void insertion_sort(int arr[], int n)
{
   int i, current_value, j;
   for (i = 1; i < n; i++)
   {
       current_value = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than current_value, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > current_value)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = current_value;
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

    insertion_sort(arr, num_of_element);

    printf("Sorted list in ascending order: \n");
    print_list(arr, num_of_element);

    return 0;
}
