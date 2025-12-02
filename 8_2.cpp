#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    double* arr = new double[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }

    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(arr, arr + n, g);

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    std::cout << sum << std::endl;

    delete[] arr;  
    return 0;
}