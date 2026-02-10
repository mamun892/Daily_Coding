#include<bits/stdc++.h>
using namespace std;

int maxWordCanType(string str, char BrokenLetter) {
    stringstream ss(str);
    string word;
    int count = 0;

    while (ss >> word) { // here ss is like cout  cin >> it means it will take the word
        if (word.find(BrokenLetter) == string::npos) { // here if broken letter Found then it  will  go count++ other wise it will not and return nothing string :: npos
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char BrokenLetter;

    cout << "Enter the sentence: ";
    getline(cin, str);  // FIXED: Reads entire line
    
    cout << "Enter the broken letter: ";
    cin >> BrokenLetter;

    int result = maxWordCanType(str, BrokenLetter);  // Store result

    cout << "Number of typable words: " << result << endl;

    return 0;
}