#include <bits/stdc++.h>
using namespace std;

string Check_If_Empty( string str){
    /*
    if( str.empty()){
        return " String is empty";
    }
    else{
        return " String  is  not empty ";
    }
    */

    // anothe way to solve it 

    if ( str.size() == 0 ){
        return " String is empty";
    }
    else {
       return "String  is  not empty" ;
    }



}

int main(){
    string str;


    cout << "Enter the full string :";
  getline(cin , str);

    string result = Check_If_Empty(str);

    cout << result ;


}