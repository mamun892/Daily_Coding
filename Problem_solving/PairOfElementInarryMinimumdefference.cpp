#include<bits/stdc++.h>
using namespace std;

pair<int , int > FindDiffPair( vector<int>& arr ,  int arrSize){

    sort(arr.begin() , arr.end());

    int midDiff = INT_MAX;

    pair< int , int >  result;

    for(int i = 0 ; i < arr.size() -1 ; i++){
        int diff = abs( arr[i] - arr[i+1]);
    

        if(midDiff > diff){
            midDiff = diff;

            result.first = arr[i];
            result . second = arr[i +1];

        }

    }

    return result ;

}


    int main() {
    int arrSize;
    cout << "Enter the arrSize: ";
    cin >> arrSize;

    vector<int> arr(arrSize);

    cout << "Enter the elements:\n";
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = FindDiffPair(arr, arrSize);

    cout << "Result: {" << result.first << ", " << result.second << "}";

    return 0;


}