/*
//
// Created by Evgeny on 14.04.2017.
//
#include <iostream>

using namespace std;

void f1(int*, int);
int main(){
    int size = 7;

    int* arr = new int[size];

    for(int i = 0; i<size; i++){
        arr[i] = 7 - i;
    }
    f1(arr, size);

    delete[](arr);

    return 0;
}

void f1(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << *(arr+i) << " ";
    }
}
*/
