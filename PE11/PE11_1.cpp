#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];//declare array size
    
    //Input values into the array
    for (int i = 0; i < SIZE; ++i) {//this makes it ask for 5 inputs
        cout << "[" << i << "] = ";
        cin >> numbers[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    //Find the smallest element in the array
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    //Find the largest element in the array
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Max: " << largest << endl;
    cout << "Min: " << smallest << endl;

    return 0;
}
