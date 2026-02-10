#include<bits/stdc++.h>

using namespace std;

string convertToSpongecase(string str){
    for(int i = 0 ; i < str.size() ; i++){
        if(i  % 2 ==0 ){
            str[i] = tolower(str[i]);
        }
        else{
            str[i] = toupper(str[i]);
        }
    }

    return str;
}

int main(){
    string str;
    getline(cin, str);

   string result =  convertToSpongecase(str);

   cout << result;

   return 0 ;
}
