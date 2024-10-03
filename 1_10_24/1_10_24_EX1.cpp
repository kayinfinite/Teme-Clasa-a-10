#include <iostream>

using namespace std;
int main() {
    unsigned int v[24][24], n, i, j;
    cout << "Cate este n: "; cin >> n ;
    cout << '\n' << "================================" << '\n'; //linia asta este doar pentru decoratie
    for(i = 0; i < n; i++)
        for(j =0; j < n; j++){
            v[i][j] = n - i;
            if(n - i == j+1)
                v[i][j] = 0;
        }
    for(i = 0; i < n; i++){
        for(j =0; j < n; j++)
            cout << v[i][j] << ' ';
    cout << '\n';
    }
    
}