#include <stdio.h>
#define CAPACITY 5

void printall(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int insert_element(int arr[], int size, int element, int index, int capacity){
    if(capacity == size){
        return -1;
    }
    int i;
    for(i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return index;
}

void main(){
    int size = 5, element = 15, index = 2, result;
    int arr[CAPACITY] = {2,4,6,8,10};
    printf("Before:\n");
    printall(arr, size);
    result = insert_element(arr, size, element, index, CAPACITY);
    if(result >= 0){
    size++;
    printf("After adding element %d to index %d\n", element, index);
    printall(arr, size);
    }
    else{
        printf("Unable to add element to array");
    }

}