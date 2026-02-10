#include<bits/stdc++.h>

using namespace std;

string Hide_cradit_card_number( string card_number){
    string LastFour = card_number.substr (card_number.size() -4);//substr() cuts a piece of a string and returns it as a new string without changing the original.
    string  hidden(12, '*');// Hiden is like a variable where i have  taken 12 character those 12 will be '*' this sign 

    string result =  hidden + LastFour; // it means first it will give me 12  * sign then it will give  me the last 4 degit 
    return  result;

}
int main(){
    string card_number;

    cout << " Enter the card number:";
    cin >> card_number;

    string result = Hide_cradit_card_number(card_number);
    cout << result ;
    return 0;
} 