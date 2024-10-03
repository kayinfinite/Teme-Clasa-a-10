#include <iostream>

using namespace std;
int main() {
    unsigned int v[10][10], m, n, i, j;
    //citim m si n
    cout << "Cate lini sa aiba matricea: "; cin >> m ;
    cout << "Cate coloane sa aiba matricea: "; cin >> n ;
    cout << '\n' << "================================" << '\n'; //linia asta este doar pentru decoratie
    //incepen constructia matricei
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(i>j) //exercitiul vrea sa comparam pe i si j si sa il punem pe cel mai mare in matrice
                v[i][j] = i+1;
            else
                v[i][j] = j+1;
    //afisam matricea
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
            cout << v[i][j] << ' ';
        cout << '\n';
    }
}