#include <iostream>
#include <string>

using namespace std;

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMax(int arr[][3], int rows, int cols) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int findMax(int arr[][3][2], int dim1, int dim2, int dim3) {
    int maxVal = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int arr1D[] = {5, 10, 3, 8, 2};
    int max1D = findMax(arr1D, 5);
    cout << "Maximum value in the one-dimensional array: " << max1D << endl;

    int arr2D[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max2D = findMax(arr2D, 3, 3);
    cout << "Maximum value in the two-dimensional array: " << max2D << endl;

    int arr3D[][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};
    int max3D = findMax(arr3D, 2, 3, 2);
    cout << "Maximum value in the three-dimensional array: " << max3D << endl;

    int a = 10, b = 20;
    int max2Int = findMax(a, b);
    cout << "Maximum value of two integers: " << max2Int << endl;

    int x = 5, y = 10, z = 3;
    int max3Int = findMax(x, y, z);
    cout << "Maximum value of three integers: " << max3Int << endl;

    system("pause");
    return 0;
}