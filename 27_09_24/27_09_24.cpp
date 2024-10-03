#include <iostream>

using namespace std;
int main() {
    unsigned int v[30][30];
    unsigned int m, n, i, j, l1, l2, c1, c2, temp;
    cout << "Cate lini sa aiba matricea: "; cin >> m ;
    cout << "Cate coloane sa aiba matricea: "; cin >> n ;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            cout <<"Introduceti numarul natural de pe linia "<< i+1 <<", coloana "<< j+1 << ": ";
            cin >> v[i][j];
        }

    //afisam matricea
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }

    //citim ce lini si coloane sa scimbam

    cout <<"Ce care e prima linie pe care o schimi: "; cin >> l1; l1--;
    cout <<"Ce care e a doua linie pe care o schimi: "; cin >> l2; l2--;
    cout <<"Ce care e prima coloana pe care o schimi: "; cin >> c1; c1--;
    cout <<"Ce care e a doua coloana pe care o schimi: "; cin >> c2; c2--;
    
    //Schimbam linile l1 cu l2
    
    for ( j = 0; j<n; j++){
       temp = v[l1][j];
       v[l1][j] = v[l2][j];
       v[l2][j] = temp; 
    }

    //afisam matricea

    cout << "Am schimbat linile: \n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }

    //Schimbam coloanele c1 cu c2

    for ( i = 0; i<m; i++){
        temp = v[i][c1];
        v[i][c1] = v[i][c2];
        v[i][c2] = temp; 
    }

    //afisam matricea

    cout << "Am schimbat coloanele: \n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
    
    return 0;
}