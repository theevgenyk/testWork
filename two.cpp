/*
//
// Created by Evgeny on 14.04.2017.
//

#include <iostream>

using namespace std;

struct value {
    value(int* arr, int size):size_par(size), arr_par(arr){};
    int size_par = -1;
    int* arr_par = new int[size_par];
};

value input();
void output (int*, int);


int main(){
    value as = input();
    output(as.arr_par, as.size_par);
    return 0;
}

value input(){
    int size;

    cout << "Input size of array" << endl;
    cin >> size;

    int* arr = new int[size];

    cout << "Input elements of array: " << endl;
    for(int i = 0; i < size; i++){
        cout << i << " element of array - ";
        cin >> *(arr+i);
        cout << endl;
    }
    value asd(arr, size);
    return asd;
}

void output(int* arr, int size){
    cout << "Your array: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
}*/
