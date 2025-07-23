#include <stdio.h>

// void PrintArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *(ptr + i));
//     }

// }

void PrintArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 555; // {This value will be changes in arr array of main as well}
}

int main()
{
    int arr[] = {1, 5, 2, 4, 5, 6};
    PrintArray(arr, 6);
    printf("The value of element ptr[2] is now %d\n", arr[2]); // (ptr[2] = Is element 3)

    return 0;
}