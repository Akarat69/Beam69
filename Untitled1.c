#include <stdbool.h>
#include <stdio.h>

void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int a[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
		printf("\n");
		printArray(a, n);
    }
}

void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
void selectionSort(int arr[], int n) {
	int i,j;
    for ( i = 0; i < n - 1; i++) {
        int min_idx = i;
        for ( j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[i],&arr[min_idx]);
        printf("\n");
		printArray(arr, n);
    }
}

int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
	printf("Sorted arry: \n");
    bubbleSort(arr, n);
    
    printf("Sorted arry: \n");
    selectionSort(arr,n);
    
    printf("Sorted arry: \n");
    printArray(arr, n);
    return 0;
}
