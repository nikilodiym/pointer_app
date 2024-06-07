#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class Matrix {
private:
    vector<vector<T>> data;
    int size;

public:
    Matrix(int size) : size(size) {
        data.resize(size, vector<T>(size));
    }

    void initialize(const T& value) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                data[i][j] = value;
            }
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    pair<T, T> findMinMaxOnMainDiagonal() {
        T minElement = data[0][0];
        T maxElement = data[0][0];

        for (int i = 1; i < size; i++) {
            if (data[i][i] < minElement) {
                minElement = data[i][i];
            }
            if (data[i][i] > maxElement) {
                maxElement = data[i][i];
            }
        }

        return make_pair(minElement, maxElement);
    }

    void sortRowsByGrowth() {
        for (int i = 0; i < size; i++) {
            sort(data[i].begin(), data[i].end());
        }
    }
};

int main() {
    Matrix<int> matrix(3);
    matrix.initialize(0);
    matrix.display();

    auto minMax = matrix.findMinMaxOnMainDiagonal();
    cout << "Min element on main diagonal: " << minMax.first << endl;
    cout << "Max element on main diagonal: " << minMax.second << endl;

    matrix.sortRowsByGrowth();
    cout << "Matrix after sorting rows by growth:" << endl;
    matrix.display();

    system("pause");
    return 0;
}