#include <stdio.h>

#define MAX_SIZE 100

void createMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu dong %d, cot %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("ma tran da nhap :\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_SIZE][MAX_SIZE];
    
    printf("nhap so hang : ");
    scanf("%d", &rows);
    printf("Nhap so cot : ");
    scanf("%d", &cols);
    
    createMatrix(matrix, rows, cols);
    
    printMatrix(matrix, rows, cols);
    
    return 0;
}

