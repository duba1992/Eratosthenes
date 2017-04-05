#include<iostream>
#include "Header.h"
using namespace std;

void fillArray(int *array,int size){
    
    int cnt = 2;
    for(int i = 0;cnt<=size;++i){
        array[i]=cnt;
        cnt++;
    }
   
}
void showArray(int *array,int size){
    
    int cnt = 2;
    for(int i = 0;cnt<=size;i++){
        cout<<array[i]<<" ";
        cnt++;
    }

    
    
}
void algoritm(int *array,int size){
    int cnt = 2;
    int p = 0;
    int alg = 0;
    int i =0;
    int n = i;
    bool mathem = true;
    while(mathem){
        for(;cnt<=size;++cnt){
            if(array[i]>0){
                cnt;
                i = n;
                n++;
                break;
            }
            i++;
        }
        
            i = 0;
            p = 2;
            alg = 0;
            for(;i<size-1;++i){
                alg=cnt * p;
                if(array[i]==alg){
                    array[i] = 0;
                    p++;
                }
                i++;
            }
            
            i = n;
        
        cnt++;
        if (cnt == size){
            mathem == false;
        }
        
        
    }
}
