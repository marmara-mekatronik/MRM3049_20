#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
// stack memory
    int dizi_stack[5] = {11, 22, 33, 44, 55};

    for (int i = 0; i < 5; ++i) {
        cout << dizi_stack[i] << endl;
    }

    cout << "____________________" << endl;

    // heap memory

    int *dizi_heap = (int *) malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; ++i) {
        *(dizi_heap + i) = i + 11;
    }

    for (int i = 0; i < 5; ++i) {
        cout << dizi_heap[i] << endl;
    }

    return 0;
}
