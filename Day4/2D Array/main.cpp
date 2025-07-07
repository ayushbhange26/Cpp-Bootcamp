#include <iostream>
using namespace std;
int main(){
    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    cout << rows << "  " << columns << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}