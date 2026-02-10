#include<bits/stdc++.h>
using namespace std;

vector<int> countSmaller(vector<int>& nums){
    int n = nums.size();
   
    vector<int> result(n);

    for (int i = 0 ; i < n ; i++){
        int count = 0 ; 

        for(int j = i - 1 ; j < n ; j++){
            if(nums[i] >nums[j]){
                count++;
            }
        }

        result[i] = count;
    }

    return result ;

}

int main(){
   int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = countSmaller(nums);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
 /*

 The result would be like this :
 
 Input 
{3, 4, 9, 8, 7}
Your Result 
{0, 0, 2, 1, 0}
Expected Result 
{0, 0, 2, 1, 0}

 */