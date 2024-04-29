#include <iostream>
using namespace std;

int main(){
    const int cap = 9;
    int original[cap] ={10,20,30,40,50,60,70,80,90};
    int reverse[cap];

    cout << "\noriginal: ";

    for(int i = 0; i < cap; i++){
        cout << original[i] << " ";
    }
    
    cout << "\nreverse: ";
     for (int i = 0; i < cap; i++){
        reverse[i] = original[cap-1 -i];
    }

    for(int i = 0; i < cap; i++){
        cout << reverse[i] << " ";
    }

    cout << "\n" << endl;

    return 0;
}