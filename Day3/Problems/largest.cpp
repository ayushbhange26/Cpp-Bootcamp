#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

int main(){
    int nums[] = {3,30,34,5,9};
    int size = sizeof(nums)/4;

    vector <string> ans;

    for(int i=0;i<size;i++){
        ans.push_back(to_string(nums[i]));
    }

    sort(ans.begin(),ans.end(),compare);
    string result;
    for (string s : ans) {
        result += s;
    }
    cout << result;
}