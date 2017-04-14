/*
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int mas[7] = {0, 1, 1, 1, 0, 1, 1};
    int ch = 0;
    int nech = 0;

    for(int i=0; i<7; i++){
        if(mas[i]==1){
            if(i%2==0){
                nech++;
            }
            else{
                ch++;
            }
        }
    }
    int newMas[6];

    for(int i=1; i<7; i++){
        for(int j=0; j<6; j++){
            newMas[j]=mas[j+1];
        }

    }
    cout << "first mas: ";
    for (int i = 0; i < 7; i++) {
        cout << mas[i] << " ";
    }

    cout << endl;

    cout << "second mas:  ";
    for (int i = 0; i < 6; i++) {
        cout << newMas[i] << " ";
    }

    cout << "Chetnoe: " << ch << endl;
    cout << "Nechettnoe:  " << nech << endl;
    system("pause");
    return 0;
}
*/
