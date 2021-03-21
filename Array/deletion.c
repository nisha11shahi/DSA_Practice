#include <stdio.h>

void display_array(int arr[], int index, int size){
    int i;
        
        for (i = 0; i<size; i++){
        printf("%d\t", arr[i]); 
        }
}

void delete_element(int arr[], int index, int size){
    int i;
    for(i= index; i< size-1;i++){
        arr[i] = arr[i+1];
    }

}

int main(){
    int index= 2, size= 5;
    int result;
    int arr[10] = {2,4,6,8,10};
    printf("Initial array:\n");
    display_array(arr, index, size);
    delete_element(arr, index, size);
    printf("Array after deletion:\n");
    size = size-1;
    display_array(arr, index, size);
   
}