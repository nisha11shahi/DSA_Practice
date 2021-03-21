#include <stdio.h>

void printall(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
}

void main(){
    int size = 5;
    int arr[10] = {2,4,6,8,10};
    printall(arr, size);

}