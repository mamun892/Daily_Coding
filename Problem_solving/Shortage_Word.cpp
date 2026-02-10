#include<bits/stdc++.h>
using namespace std;

string shortagWord( string str){
    string shortage , word;
    int minLength =  INT_MAX;

    stringstream ss(str);

    while( ss >> word){ // it will check there is any any next word  or  not 
        if( word.length() < minLength){  // it will check that the correct word is less then minlength(here minlenght is the str.size())
            minLength = word.size(); // then  it wil give that currect word is short sot it upadate;
            shortage = word; 
        }
    }
    

    return shortage;

}

int main(){
    string str ;
    cout << "Enter the  stringLine :";

    getline(cin , str);

    string result = shortagWord(str);

   cout <<  result ;

   return 0 ;
}


