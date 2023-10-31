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
    cout << "������ ����� ������: ";
    cin >> n;

    if (n <= 0) {
        cerr << "�������� ����� ������." << endl;
        return 1;
    }

    int* arr = new int[n];
    std::cout << "������ " << n << " ����� �����: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    swapElementsWithOddEvenIndices(arr, n);

    std::cout << "����� ���� ����� ��������: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
