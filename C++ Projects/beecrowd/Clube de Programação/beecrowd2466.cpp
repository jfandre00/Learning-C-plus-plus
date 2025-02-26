#include <iostream>

void processArray(int arr[], int N) {
    if (N == 1) {
        if (arr[0] == 1) {
            std::cout << "preta" << std::endl;
        } else {
            std::cout << "branca" << std::endl;
        }
        return;
    }

    int arrAuxiliar[N - 1];
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] == 1 && arr[i + 1] == 1) {
            arrAuxiliar[i] = 1;
        } else if (arr[i] == -1 && arr[i + 1] == -1) {
            arrAuxiliar[i] = 1;
        } else {
            arrAuxiliar[i] = -1;
        }
    }

    processArray(arrAuxiliar, N - 1);
}

int main() {
    int N;
    std::cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    processArray(arr, N);

    return 0;
}
