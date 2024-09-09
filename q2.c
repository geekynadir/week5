#include<stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter the rows and columns of the first Matrix\n");
    scanf("%d %d", &r, &c);

    int mat1[r][c];

    printf("Enter the Elements of the First Matrix\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nThe first Matrix Elements are\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    int res[c][r];
    for(i=0;i<c;i++){
      for(j=0;j<r;j++){
       res[i][j]=mat1[j][i];
      }
    }

   printf("\nThe Transpose  Matrix Elements are\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

}