#include <stdio.h>

int linear_search(int arr[], int size, int searchelement){
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == searchelement){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] ={1,4,6,7,8,23,24,26,30};
    int size = sizeof(arr)/sizeof(int);
    int searchelement = 26;
    int result = linear_search(arr, size, searchelement);
    if (result >= 0)
    {
        printf("Element found at index %d\n", result);
    }
    else{
        printf("Element not found");
    }

}