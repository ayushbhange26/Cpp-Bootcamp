#include <iostream>
#include <vector> 
using namespace std;
int main(){
    vector <int> v = {7,10,1,3,6,9,2};
    int max_profit = 0;

    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if( (v[j]-v[i])  > max_profit ){
    //             max_profit = v[j]- v[i];
    //         }
    //     }
    // }

    int min_price = v[0];
    // int max_profit = 0;

    for(int i=1;i<v.size();i++){
        min_price = min(min_price,v[i]);

        int profit = v[i]-min_price;

        max_profit = max(max_profit,profit);
    }
    cout << max_profit;
}