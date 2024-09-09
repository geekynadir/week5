#include<stdio.h>
#include<math.h>

int main() {
    int n, m, i, j;

    printf("Enter the range (n and m): \n");
    scanf("%d%d", &n, &m);

    if(n < 0 || m < 0) {
        printf("Enter valid positive integers.\n");
        return 0;
    }

    for(i = n; i <= m; i++) {
        if(i == 1) {
            continue;
        }

        // Check if the number is prime
        int count = 0;
        for(j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                count++;
                break;
            }
        }

        if(count == 0) {
            printf("%d ", i);
        }
    }
 
    return 0;
}
