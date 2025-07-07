#include <iostream>
#include <vector>
using namespace std;
int main(){
    int v[3][3] = {
        {1,1,0},
        {1,0,1},
        {1,1,1},
    };
    vector <int> rows;
    vector <int> cols;
    
    for(int i = 0; i < 3; i++){
        for( int j = 0 ; j < 3; j++){
            if(v[i][j]==0){
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }
    // when we have rows only need ot iterate the columns
    // and colmn then iterate rows4
    for(int i=0;i<rows.size();i++){
        for(int j=0;j<3;j++){
            v[rows[i]][j] = 0;
            v[j][cols[i]] = 0;
    }
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        for( int j = 0 ; j < 3; j++){
            cout << v[i][j] << "  ";
        }
        cout << endl;
    }
    
}