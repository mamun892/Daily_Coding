#include<bits/stdc++.h>

using namespace std;

vector<string> jazzify(vector<string>& chords) {
    vector<string> result ;

    for(int i = 0 ; i < chords.size() ; i++){
        if(chords[i].back() == '7'){
            result.push_back(chords[i]);
        }
        else{
            result.push_back(chords[i] + "7");
        }
    }

    return result;
}

int main(){
    string sentence;
    getline(cin , sentence);

    string result = jazzify(sentence);
}
