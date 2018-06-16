//
// Created by crucio on 16/06/2018.
//

#include "../Header/ExpandArray.h"

void expandArray(int *&array,int dimensione_array, int *&array_expanded, int nuova_dimensione) {

    if (array_expanded == nullptr) {

        for (int i = 0; i < dimensione_array; i++) {
            array_expanded[i] = array[i];
        }
        delete[] array;
        array = array_expanded;
    } else {
        int *temp = new int[dimensione_array];

        for (int i = 0; i < dimensione_array; i++) {
            temp[i] = array_expanded[i];
        }

        delete[] array_expanded;

        array_expanded = new int[nuova_dimensione];

        for (int i = 0; i < dimensione_array; i++) {
            array_expanded[i] = temp[i];
        }

        delete[] temp;
        temp = nullptr;

        array = array_expanded;


    }
}

