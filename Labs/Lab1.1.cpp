// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols];

    std::cout << "Введите элементы массива 5x5:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> arr[i][j];

        }
    }
    int minElement = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < minElement) {
                minElement = arr[i][j];
            }
        }
    }
    std::cout << "Минимальный элемент в массиве:" << std::endl;

    return 0;
}