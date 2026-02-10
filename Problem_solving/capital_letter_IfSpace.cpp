#include<bits/stdc++.h>
using namespace std;

string convertToTitleCase(string str){
    for( int i =0 ; i < str.size();  i++){
        if ( i ==0  || str[i-1] == ' '){
            str[i] = toupper( (unsigned char)str[i]);
        }
        else{
            str[i] = tolower( (unsigned char)str[i]);
        }

    }

    return str;
}



int main(){
    string sen;
    cout << " Enter the sentence:";
    getline(cin, sen);

    string str =   convertToTitleCase(sen);
    cout << str ;
}