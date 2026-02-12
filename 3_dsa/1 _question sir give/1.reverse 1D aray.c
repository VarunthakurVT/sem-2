#include <stdio.h>

void reverse(int arr[], int size) {
    int i, temp;
    for(i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    
    printf("Before: ");
    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    
    reverse(arr, 6);
    
    printf("\nAfter:  ");
    for(int i=0; i<6; i++) printf("%d ", arr[i]);
    
    return 0;
}
