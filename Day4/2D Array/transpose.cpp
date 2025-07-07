#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    cout << rows << "  " << columns << endl;
    int target = 0;

    // transpose of matrix

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if((i+j) > target){
                swap(matrix[i][j],matrix[j][i]);
                target = i+j;
            }
        }
    }

    // rotation after transpose
    for(int i=0;i<rows;i++){
       int start = 0;
       int end = columns-1;
       while(start<end){
        swap(matrix[i][start],matrix[i][end]);
        start++;
        end--;
       }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}