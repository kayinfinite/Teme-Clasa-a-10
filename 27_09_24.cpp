#include <iostream>

using namespace std;
int main() {
    unsigned int v[30][30];
    unsigned int m, n, i, j, l1, l2, c1, c2, temp;
    cout << "Cate lini sa aiba matricea: "; cin >> m ;
    cout << "Cate coloane sa aiba matricea: "; cin >> n ;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            cout <<"Introduceti numarul natural de pe linia "<< i <<", coloana "<< j << ': ';
            cin >> v[i][j];
        }



    return 0;
}