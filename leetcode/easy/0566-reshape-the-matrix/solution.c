#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes) {
    int rows = matSize;
    int cols = matColSize[0];

    // If the element counts differ, return the original dimensions.
    if (rows * cols != r * c) {
        r = rows;
        c = cols;
    }

    *returnSize = r;
    *returnColumnSizes = malloc(r * sizeof(int));
    int** result = malloc(r * sizeof(int*));

    for (int i = 0; i < r; i++) {
        (*returnColumnSizes)[i] = c;
        result[i] = malloc(c * sizeof(int));
    }

    // Copy elements in row-traversal order.
    for (int i = 0; i < rows * cols; i++) {
        result[i / c][i % c] = mat[i / cols][i % cols];
    }

    return result;
}