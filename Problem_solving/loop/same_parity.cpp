#include <bits/stdc++.h>
using namespace std;

bool isSameParity(int arr[], int size) {

    if(size == 0 ) return true ;
    int pirity = arr[0] % 2 ;
    
    for ( int i =0 ;i< size ; i++){
        if (arr[i] % 2 !=  pirity ){
            return false;
        }
        
    }
    return true ;
        
        


}