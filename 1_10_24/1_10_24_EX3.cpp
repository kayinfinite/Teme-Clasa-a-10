#include <iostream>

using namespace std;
int main() {
    unsigned int v[10][10], m, n, i, j, min;
    //citim m si n
    cout << "Cate lini sa aiba matricea: "; cin >> m ;
    cout << "Cate coloane sa aiba matricea: "; cin >> n ;
    cout << '\n' << "================================" << '\n'; //linia asta este doar pentru decoratie
    //citim datele pe ficare rand si coloana
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            cout <<"Introduceti numarul natural de pe linia "<< i+1 <<", coloana "<< j+1 << ": ";
            cin >> v[i][j];
        }
    cout << '\n' << "================================" << '\n'; //linia asta este doar pentru decoratie
    //Verificam care este minimul pe fiecare linie
    for(i=0; i<m; i++){
        min = v[i][0];
        for(j=0; j<n; j++)
            if(v[i][j] < min)
                min = v[i][j];
        cout << "Linia " << i + 1 << " are minimul: " << min << '\n'; //afisam minimul pentru fiecare linie
    }

}