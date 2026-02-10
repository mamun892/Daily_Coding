/*
Remove vowel from the given string and return the result without any vowel 
*/

#include <iostream>
#include <string>
using namespace std;

string removeVowels(string sentence) {
    string result = "";
    for( int i = 0 ; i < sentence.size(); i++){
        if ( sentence[i] =='a' or sentence[i] =='e' or sentence[i] =='i' or sentence[i] =='o' or sentence[i] =='u' or sentence[i] =='A' or sentence[i] =='E' or sentence[i] =='I' or sentence[i] =='O' or sentence[i] =='U') continue;
        else result = result + sentence[i];
    }
    return result;
}

int main(){
    string sentence;
    cout << " Enter the sentence:";

    getline(cin, sentence);

     string result = removeVowels(sentence);
    
     cout << result ;

     return 0;


}

