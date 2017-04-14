//
// Created by Evgeny on 14.04.2017.
//
#include <iostream>
#include <vector>

using namespace std;
//12
int main(){
    vector <int> myVector;
    myVector.reserve(13);
   /* myVector.insert(myVector.end(), 0);
    myVector.insert(myVector.end(), 1);
    myVector.insert(myVector.end(), 1);
    myVector.insert(myVector.end(), 1);
    myVector.insert(myVector.end(), 0);
    myVector.insert(myVector.end(), 1);
    myVector.insert(myVector.end(), 1);*/
    int ch = 0;
    int nech = 0;
    for(int i=0; i < 200000; i++){
        myVector.insert(myVector.end(), 0);
        if(myVector[i]==1){
            if(i%2==0){
                nech++;
            }
            else{
                ch++;
            }
        }
    }
    myVector.insert(myVector.end(), 1);
    cout << "Hi" << endl;
    cout << "Chetnoe: " << ch << endl;
    cout << "Nechettnoe:  " << nech << endl;
/*    myVector.insert(myVector.end(), 10);
    myVector.insert(myVector.end(), 11);
    myVector.insert(myVector.end(), 12);
    myVector.insert(myVector.end(), 13);
    myVector.insert(myVector.end(), 14);
    myVector.insert(myVector.end(), 15);
    myVector.insert(myVector.end(), 16);*/

   /* cout << "Start arr: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout<<endl;*/


 /*   for(int i=0; i<myVector.size(); i++){
        if(myVector[i]==1){
            if(i%2==0){
                nech++;
            }
            else{
                ch++;
            }
        }
    }*/


    vector <int> myVector1(myVector);
    int j=0;
    do{
        ch=0; nech=0;
        myVector1.erase(myVector1.begin()+j);
        for(int i=0; i<myVector1.size(); i++){
            if(myVector1[i]==1){
                if(i%2==0){
                    nech++;
                }
                else{
                    ch++;
                }
            }
        }
        if(ch!=nech) {
            myVector1.insert(myVector1.begin()+j, myVector[j]);
        }
        /*cout << "Chetnoe: " << ch << endl;
        cout << "Nechettnoe:  " << nech << endl;*/
        //vector <int> myVector1(myVector);
        j++;
    }
    while(ch != nech);
    cout << j << "___ ETO JE J" << endl;
    /*cout << "New arr: ";
    for (int i = 0; i < myVector1.size(); ++i) {
        cout << myVector1[i] << " ";
    }
    cout<<endl;*/
system("pause");
    return 0;
}
