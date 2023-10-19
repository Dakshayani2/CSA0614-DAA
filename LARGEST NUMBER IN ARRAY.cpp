#include <stdio.h>
int main() {
    int n, i;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1; 
    }
int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
printf("The largest element in the array is: %d\n", max);
return 0;
}
