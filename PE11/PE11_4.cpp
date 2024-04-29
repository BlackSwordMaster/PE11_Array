#include <iostream>
using namespace std;

char letters[26];

void getLetters(){
    for(int i = 0; i<26; i++){
        letters[i] = 'A' + i; // ASCII value of 'A' is 65
    }
}

void printLetters(const string& type){
    cout << type << ": ";
    for(int i = 0; i < 26; i++){
        cout << letters[i] << " ";
    }
}

void swarp(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

void reverseLetters(){
    for(int first = 0, last = 25; first < last; first++, last--){
        swap(letters[first], letters[last]);
    }
}

int main(){
    cout << endl;
    getLetters();

    printLetters("Original");

    cout << endl;
    reverseLetters();

    printLetters("Reversed");

    cout << "\n" << endl;

    return 0;
}