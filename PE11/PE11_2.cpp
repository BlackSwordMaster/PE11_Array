#include <iostream>
using namespace std;

int main(){
    const int size = 5;
    int numbers[size];
    srand(time(0));

    cout << endl;
    cout << "Array:";
    for (int i = 0; i < size; ++i){
        numbers[i] = rand()%9+1;
        cout << " " << numbers[i];
    } 

    int highest = numbers[0];
    for(int i = 1; i < size; ++i){
        if(numbers[i] > highest){
             highest = numbers[i];
        }
    }

    cout << "\nHighest: " << highest << endl;

    cout << "Differences from the highest :" << endl;
    for(int i = 0; i < size; ++i){
        int difference = highest - numbers[i];

        cout << numbers[i] << " off by " << difference << endl; 
    }
    cout << endl;
    
    
    return 0;

}