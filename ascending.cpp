#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int numbers[size] = {7, 4, 8, 2, 5};

 
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (numbers[j] > numbers[j + 1]) {
            
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

   
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
