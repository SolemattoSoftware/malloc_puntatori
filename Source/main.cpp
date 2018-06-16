#include "../Header/ExpandArray.h"

#include <iostream>

using namespace std;

int main() {

    int* pInt = new int[1000000];

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
    int* temp = new int[200000];


   /* //copio i dati del primo array nel nuovo
    for(int i = 0; i < 100; i++){
        temp[i] = pInt[i];
    }

    //restituisco ram del primo puntatore


    delete[] pInt;
    pInt = temp;
*/

   expandArray(pInt,100,temp,101);
   temp = nullptr;
   temp = new int[400];
   pInt[151] = 1000000;

   cout << "Test: " << pInt[151] << endl;

    delete[] temp;
    temp = nullptr;
}