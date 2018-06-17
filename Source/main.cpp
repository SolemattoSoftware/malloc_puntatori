#include "../Header/ExpandArray.h"

#include <iostream>

using namespace std;

int main() {

    int *pInt = new int[100];

    cout << sizeof(pInt);
    //simulazione caricamento ed esaurimento
    for(int i = 0; i < 100;i++){
        pInt[i]= i;
    }

    for(int i = 0; i < 100;i++){
        cout << pInt[i] << endl;
    }

    cout << "-----------------------------------------------\n";

    //allocazione di un array più grande
    int *temp = new int[200];


   /* //copio i dati del primo array nel nuovo
    for(int i = 0; i < 100; i++){
        temp[i] = pInt[i];
    }

    //restituisco ram del primo puntatore


    delete[] pInt;
    pInt = temp;
*/

    expandArray(pInt, 100, temp, 200);
    for (int i = 100; i < 200; i++) {
        pInt[i] = i;
    }
    cout << "Test: " << pInt[199] << endl;

    expandArray(pInt, 200, temp, 400);
    pInt[351] = 351;
    cout << "Test2: " << pInt[351];

    delete[] temp;
    temp = nullptr;
    pInt = nullptr;
}