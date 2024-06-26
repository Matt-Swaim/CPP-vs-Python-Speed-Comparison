#ifndef SORTING_BUBBLESORT_H
#define SORTING_BUBBLESORT_H

#include <fstream>
using namespace std;


template<typename Comparable>
vector<Comparable> bubbleSort(vector<Comparable> vec) {
    int numPasses = 0, i;
    Comparable temp;
    bool haveSwapped = true;
    while (haveSwapped) {
        haveSwapped = false;
        for (i = 0; i+1 < vec.size()-numPasses - 1; ++i) {
            // Compare items at indices i and i+1 and swap if necessary
            if (vec[i] > vec[i+1]) {
                temp = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = temp;
                // Update haveSwapped
                haveSwapped = true;
            }
        }

        // Update numPasses
        ++numPasses;

       

    }

    return vec;
}



#endif