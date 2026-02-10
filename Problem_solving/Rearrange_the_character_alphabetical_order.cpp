#include<bits/stdc++.h>
using namespace std;

string Rearrange_the_word_in_Alphabetic_order(string str){
    sort(str.begin(), str.end());
    return str;
}

int main(){
    string str;
    cout << "Enter the string:";
    cin >> str;

    string result = Rearrange_the_word_in_Alphabetic_order(str);
    cout << result;
    return 0 ;
}