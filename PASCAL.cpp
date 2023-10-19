#include <stdio.h>
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
    }
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (int line = 0; line < n; line++) {
       
        for (int i = 0; i < n - line - 1; i++) {
            printf(" ");
        }

        for (int k = 0; k <= line; k++) {
            int coeff = binomialCoeff(line, k);
            printf("%d ", coeff);
        }

        printf("\n");
    }

    return 0;
}
