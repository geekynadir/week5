#include<stdio.h>


void srt(int arr[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, m, i, j, k;

    printf("Enter the size of the first Array\n");
    scanf("%d", &n);
    int arr1[n];
    
    printf("Enter the elements of the first Array\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second Array\n");
    scanf("%d", &m);
    int arr2[m];

    printf("\nEnter the elements of the Second Array\n");
    for(i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nThe first Array Elements are :- ");
    printArray(arr1, n);

    printf("\nThe Second Array Elements are :- ");
    printArray(arr2, m);

    srt(arr1, n);
    srt(arr2, m);

    printf("\nThe sorted first Array Elements are :- ");
    printArray(arr1, n);

    printf("\nThe sorted Second Array Elements are :- ");
    printArray(arr2, m);

    // Merging into resultant Array
    int res[m + n];
    i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n) {
        res[k] = arr1[i];
        i++;
        k++;
    }
    while(j < m) {
        res[k] = arr2[j];
        j++;
        k++;
    }

    // Printing the merged sorted array
    printf("\nThe merged sorted Array Elements are :- ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}
