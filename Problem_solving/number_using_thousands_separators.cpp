#include<bits/stdc++.h>
using namespace std;

string FormetWithComma(int num){

    string s = to_string(num);
    string result = "";
   int  count = 0;

    for( int i = s.size() - 1; i >=0 ; i--){

        result += s[i];
        count ++ ;

        if( count == 3 && i!= 0){
            result += ',';
            count= 0;
        }

    }

    reverse(result.begin() , result.end());

    return result ;


}

int main(){
    int num;
    cout << "Enter the numer:";

    cin >> num;

    string result = FormetWithComma(num);
    cout << result ;
    
    return 0 ;
}