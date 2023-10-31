#include <iostream>
using namespace std;
void swapElementsWithOddEvenIndices(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Недійсний розмір масиву." << endl;
        return 1;
    }

    int* arr = new int[n];
    std::cout << "Введіть " << n << " цілих чисел: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    swapElementsWithOddEvenIndices(arr, n);

    std::cout << "Масив після обміну елементів: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
