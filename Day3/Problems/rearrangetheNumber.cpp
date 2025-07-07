#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {-1,2,-2,7-3,-9,-4,5,6,7,8,9};

    vector <int> pos , neg;

    for(int i=0;i<v.size();i++){
        if(v[i]<0){
            neg.push_back(v[i]);
        }
        else{
            pos.push_back(v[i]);
        }
    }

    int posIdx = 0;
    int negIdx = 0;
    for(int i=0;i<(pos.size()+neg.size()-1);i++){
        if(i%2==0 && (posIdx < pos.size())){
            v[i] = pos[posIdx];
            posIdx++;
        }
        else{
            if(negIdx < neg.size()){
                v[i] = neg[negIdx];
                negIdx++;
            }
        }
    }
    for(int i=0;i<pos.size();i++){
        cout << pos[i] << "  ";
    }
    cout << endl;

    for(int i=0;i<neg.size();i++){
        cout << neg[i] << "  ";
    }
    cout << endl;

    for(int i=0;i<v.size();i++){
        cout << v[i] << "  ";
    }


}