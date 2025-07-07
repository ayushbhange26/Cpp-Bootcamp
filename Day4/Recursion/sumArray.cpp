#include <iostream>
#include <vector>
using namespace std;
int sumArray(vector <int> v,int sum,int Idx){
    if(Idx==v.size()){
        return sum;
    }
    else{
        sum +=  v[Idx];
        cout << sum << " ";
        return sumArray(v,sum,Idx+1);
    }
}
int main(){
    vector <int> v = {1,2,3,4,5};
    int sum = 0;
    cout << sumArray(v,sum,0);

}