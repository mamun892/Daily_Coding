#include<bits/stdc++.h>

using namespace std;

double Calculate_Hurmonic_series( int n){

    double result = 0.0;
    for(int i = 1 ; i <=n ; i++){
        result += 1.0 /i;
    }
    return result ;

}

int main(){
    int n;
    cout << "Enter the n:";

    cin >> n;
    double result = Calculate_Hurmonic_series(n);
    cout << result;
    return 0;
}
