#include <iostream>
#include <cstdlib>

const int MAX = 100;

int findMinimalSumPosition(int arr[], int start) {
    if (start + 10 > MAX) {
        return -1; 
    }
    
    int minSum = INT_MAX;
    int minSumPosition = -1;
    int sum = 0;
    
    for (int i = start; i < start + 10; i++) {
        sum += arr[i];
    }
    
    if (sum < minSum) {
        minSum = sum;
        minSumPosition = start;
    }
    
    int nextPosition = findMinimalSumPosition(arr, start + 1);
    
    if (nextPosition != -1 && arr[nextPosition] < minSum) {
        minSum = arr[nextPosition];
        minSumPosition = nextPosition;
    }
    
    return minSumPosition;
}

int main() {
    int arr[MAX];

    srand(time(0));
    for (int i = 0; i < MAX; i++) {
        arr[i] = rand() % 100;
    }
    
    int startPosition = findMinimalSumPosition(arr, 0);
    
    std::cout << "The position from which a sequence of 10 numbers whose sum is minimal begins: " << startPosition << std::endl;
    
    return 0;
}