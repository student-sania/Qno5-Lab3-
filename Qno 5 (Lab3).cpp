// Q no: 05
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter Size of Rows: ";
    cin >> n;
    cout << "Enter Size of Columns: ";
    cin >> m;
    int arr[n][m];
    cout << "Enter 2D Array Elements:" << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Enter Size of Rows: ";
    cin >> m;
    cout << "Enter Size of Columns: ";
    cin >> n;
    int transpose[m][n];
    cout << "Transpose Matrix is:" << endl;
    for (int j=0; j<m; j++){
        for (int i=0; i<n; i++){
            transpose[j][i] = arr[i][j];
            cout << transpose[j][i] << " ";
        }
        cout << endl;
    }       
    return 0;
}