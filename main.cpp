#include<iostream>
#include"Header.h"
using namespace std;


int main() {
    int size;
    cin>>size;
    int *array = new int[size-1];
    fillArray(array, size);
    showArray(array, size);
    algoritm(array, size);
    showArray(array, size);
}
