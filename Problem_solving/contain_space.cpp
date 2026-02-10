
// check  the sentence has space or not  

#include<iostream>
#include<string>

using namespace std;

string CheckSpaceInString( string sentence){
    for(int i = 0; i<sentence.size() ; i++){
        if( sentence[i] == ' '){
            return " it contain space";
        }

    }

    return " it doesnot cotain the space ";

}

int main(){
    string sentence;
    cout <<"Enter the  sentence  :";

    getline(cin , sentence);

   string result =  CheckSpaceInString(sentence);

   cout << result;
   return 0 ;


}