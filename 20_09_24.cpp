#include <iostream>

using namespace std;
int main() {
    float V[30];
    unsigned int n, i, poz;
    float min, max, s, p;
    cout << "cate numere sa aiba vectorul: ";
    cin >> n;
    for (i = 0; i < n; i++)cin >> V[i];
    min = V[0]; max = v[0]; s = 0; p = 1; poz = 0;
    //deducem numarul maxim si minim din sir
    for (i = 0; i < n; i++){
        if(V[i] < min)min = V[i]; //aici deducem numarul minim
        if(V[i] > max)max = V[i]; //aici deducem numarul maxum
    //deducem numarul de numere pozitive, suma nr negative, produsul nr pozitive
        if(V[i]>= 0){               //verificam daca e numarul din sir e pozitiv
            poz++;                  // adaugam +1 pentru fiecare nr pozitiv
            p = V[i] * p;           //imultim nr pozitive
        }
        if(V[i]< 0)s = s + V[i];    //verifican daca e nr negative si adunam suma
    }
    cout << "Elementul minim: " << min << "\n";
    cout << "Elementul maxim: " << max << "\n";
    cout << "Numarul numerelor pozitive: " << poz << "\n";
    cout << "Suma numerelor negative: " << s << "\n";
    cout << "Produsul numerelor pozitive: " << p << "\n";
    return 0;
}