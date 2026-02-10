#include<bits/stdc++.h>
using namespace std;

string checkDisarium(int num){
    string numstr = to_string(num);

    int sum = 0 ;

    for(int i = 0 ; i <numstr.size() ; i++){
        int degit =  numstr[i] - '0' ;
        sum  += pow(degit  , i + 1);
    }
    if(sum == num){
        return " Its disarium number";
    }
    else{
        return " its not disarium number";
    }
}

int main(){
    int num;
    cout << " Enter the number:";
    cin >> num;

    string result = checkDisarium(num);
    cout << result;

    return 0 ; 

}

