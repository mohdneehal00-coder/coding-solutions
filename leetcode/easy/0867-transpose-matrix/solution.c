#include <stdlib.h>

/**
 * Return an array of rows. The caller will free the returned rows
 * and the arrays pointed to by returnColumnSizes.
 */
int** transpose(
    int** matrix,
    int matrixSize,
    int* matrixColSize,
    int* returnSize,
    int** returnColumnSizes
) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int** result = malloc(cols * sizeof(int*));
    *returnColumnSizes = malloc(cols * sizeof(int));

    for (int c = 0; c < cols; c++) {
        result[c] = malloc(rows * sizeof(int));
        (*returnColumnSizes)[c] = rows;

        for (int r = 0; r < rows; r++) {
            result[c][r] = matrix[r][c];
        }
    }

    *returnSize = cols;
    return result;
}