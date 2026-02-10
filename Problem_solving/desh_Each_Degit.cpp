#include<bits/stdc++.h>
using namespace std;

string  DeshBetweenEachNumber( int num){

    string s = to_string(num);
    string result = "";


    for ( int i = 0 ; i < s.size(); i ++){
        result += s[i];

        if (i != s.size() -1 ){
            result = result + "-";

        }
    }

    return result ;



}
int main(){
    int num;
    cout << " Enter the number :";
    cin >>  num;

    string result = DeshBetweenEachNumber(num);

    cout << result << endl;

    return 0 ;


}