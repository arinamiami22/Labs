// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>

int main() {
    const int rows = 3;
    const int cols = 3;
    float arr[rows][cols];

    std::cout << "Введите элементы массива 3x3:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];
        }
    }
    float oneDimArr[rows * cols];
    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            oneDimArr[index++] = arr[i][j];

        }
        std::sort(oneDimArr, oneDimArr + (rows * cols));

        index = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                arr[i][j] = oneDimArr[index++];
            }
        }
        std::cout << "Отсортированный массив 3x3:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << arr[i][j] << "";
            }
            std::cout << std::endl;
        }


        return 0;
    }
}