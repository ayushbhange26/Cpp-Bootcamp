#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;
int main(){
    set <int>  s1 = {1,2,3,4,5};
    set <int>  s2 = {1,2,3,4,5};

    vector <int> result;

    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(result,result.begin()));

     for (int x : result) {
        cout << x << " ";
    }

}