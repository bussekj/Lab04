#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <vector>
#include "methods.h"
using namespace std;



void bubble(vector<int> x) {
    int n = x.size();
    bool sorted = false;
    int temp = 0;
    //runs through vector until there's a run where nothing is swapped
    while (sorted == false) {
        sorted = true;
        for (int i = 1 ; i < n ; i++) {
            if (x[i - 1] > x[i]) {
                temp = x[i - 1];
                x[i - 1] = x[i];
                x[i] = temp;
                sorted = false;
            }
        }
    }
}

void insertion(vector<int> x) {
    int n = x.size();
    //will run through unsorted section until sorted section is full and correct
    for (int unsorted = 1 ; unsorted < n ; unsorted++) {
        int nextitem = x[unsorted];
        int insert = unsorted;
        while ((insert > 0) && (x[insert - 1] > nextitem)) {
            x[insert] = x[insert - 1];
            insert--;
            }
        x[insert] = nextitem;
    }
}

void merge(vector<int> x) {

}

//finds the correct pivot point for the vector
int partition(vector<int> x, int first, int last) {
    int mid = first + (last - first) / 2;
    //puts first, mid, and last in ascending order
    int temp = 0;
    if (x[first] > x[mid]) {
        int temp = x[first];
        x[first] = x[mid];
        x[mid] = temp;
    }
    if (x[mid] > x[last]) {
        int temp = x[mid];
        x[mid] = x[last];
        x[last] = temp;
    }
    if (x[first] > x[mid]) {
        int temp = x[first];
        x[first] = x[mid];
        x[mid] = temp;
    }
    //sets pivot point right before last
    temp = x[mid];
    x[mid] = x[last - 1];
    x[last - 1] = temp;
    int pivot = last - 1;
    //sets left index to one after first and right index to 2 before last
    int fromleft = first + 1;
    int fromright = last - 2;
    bool done = false;
    while (!done) {
        //finds first number on the left that is greter than the pivot
        while (x[fromleft] < x[pivot]) {
            fromleft++;
        }
        //finds first number on the right that is less than the pivot
        while (x[fromright] > x[pivot]) {
            fromright--;
            //swaps left and right indexes 
        }
        if (fromleft < fromright) {
            int temp = x[fromleft];
            x[fromleft] = x[fromright];
            x[fromright] = temp;
            fromleft++;
            fromright--;
        }
        else {
            done = true;
        }
    }
    return fromleft;
}

void quick(vector<int> x, int first, int last) {
    int n = x.size();
    int pivot = partition(x, x[0], x[n - 1]);
    //continuously sorts through the new halves made
    quick(x, first, pivot - 1);
    quick(x, pivot + 1, last);
}

void radix(vector<string> x) {
    
    for(int i = 0; i< x[0].size(); i++){
        vector<string> temp;
        for (int k = 0; k<10; k++){
            
            string charValue;
            for(int z = 0; z<x.size();z++){
                charValue = x[z][i];
                if(charValue == to_string(k)){
                    temp.push_back(x[k]);
                }
            }
            x = temp;
            temp.clear();
        }
    }
}