#include <stdio.h>

int res

int main(){
    int arr[] ={1,4,6,7,8,23,24,26,30};
    int size = sizeof(arr)/sizeof(int);
    int searchelement = 26;
    int result = binary_search(arr, size, searchelement);
    if (result >= 0)
    {
        printf("Element found at index %d\n", result);
    }
    else{
        printf("Element not found");
    }
}