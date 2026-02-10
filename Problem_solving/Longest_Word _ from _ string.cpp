#include<bits/stdc++.h>
using namespace std;

string FindTheLongestWordFromTheSentence(string sentence){

    string word , Longestsentence;
    stringstream ss (sentence);

    int maxLength = 0;

    while( ss >> word){
        if(maxLength < word.size()){
            maxLength = word.size();
            Longestsentence = word;

        }

    }
     return Longestsentence;

}
int main(){
    string sentence;
    cout << " Enter the sentence :";
    getline(cin , sentence);

    string result = FindTheLongestWordFromTheSentence(sentence);
    cout << result ;
    return 0 ;

}