#include <iostream>
using namespace std;

const int MaxSize = 3;// used to set the max size of the array

//Function to get a 2d array from the user
void defaultArray(int array[MaxSize][MaxSize], int row, int col){
    for(int a =0; a < row; a++){
        for(int b =0; b < col; b++){
            cin >> array[a][b];
        }
    }
}

//Function to add to the default 2d array
void addArray(int array1[MaxSize][MaxSize], int array2[MaxSize][MaxSize], int array3[MaxSize][MaxSize], int row, int col){
    for(int a = 0; a < row; a++){
        for(int b = 0; b < col; b++){
            array3[a][b] = array1[a][b] + array2[a][b];
        }
    }
}

//Function to print the 2d array
void printArray(int array[MaxSize][MaxSize], int row, int col){
    for(int a = 0; a < row; a++){
        for(int b = 0; b < col; b++){
            cout << array[a][b] << " ";
        }
        cout << endl;
    }
}

int main(){
    int row, col;
    cout << endl;
    cout << "Enter the 2D dimensions (row and column): ";
    cin >> row >> col;

    //Just a little valadation to check if input is within the range we set
    if(row > MaxSize || col > MaxSize){
        cout << "Error, Input exceeds the maximum allowed size of " << MaxSize << "." << endl;
        return 1;
    }

    int array1[MaxSize][MaxSize], array2[MaxSize][MaxSize], array3[MaxSize][MaxSize];

    cout << endl;
    cout << "Enter the numbers of 2D array_1:\n";
    defaultArray(array1, row, col);

    cout << "Enter the numbers of 2D array_2:\n";
    defaultArray(array2, row, col);

    addArray(array1, array2, array3, row, col);

    cout << endl;
    cout << "2D array_3:\n";
    printArray(array3, row, col);

    return 0;
}
