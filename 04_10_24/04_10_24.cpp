#include<iostream>

using namespace std;
int main() {
    int v[25][25];
    unsigned int n, m, i, j, pare = 0, impare = 0, div3 = 0, div5 = 0, div10 = 0;
    cout << "Cate lini sa aiba matricea: "; cin >> m ;
    cout << "Cate coloane sa aiba matricea: "; cin >> n ;
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            cout <<"Introduceti numarul natural de pe linia "<< i+1 <<", coloana "<< j+1 << ": ";
            cin >> v[i][j];
        }
    cout << "========================================= \n";
    for(i=0; i<m; i++)
        for(j=0; j<n; j++){
            if(v[i][j] % 2 == 0)
                pare++;
            else
                impare++;
            
            if(v[i][j] % 3 == 0)
                div3++;

            if(v[i][j] % 5 == 0)
                div5++;

            if(v[i][j] % 10 == 0)
                div10++;
        }
    
    cout << "Numarul elementelor: \n" <<"Pare: " << pare <<"\n Impare: "<< impare << "\n Divizibile cu 3: "<< div3 << "\n Divizibile cu 5: "<< div5 << "\n Divizibile cu 10: "<< div10;
}