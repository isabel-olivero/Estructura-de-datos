/*Laura Isabel Olivero*/
#include <iostream>
#include <string>
#include <vector>
/*esta solucion tiene una complejidad e de O(n^2) pues a pesar de que no contiene ciclos anidados contiene un ciclo
que contiene la operacion size la cual tiene complejidad lineal lo que hace que sea n*n */
using namespace std;


vector<char> realCadena(string s) {
    vector<char> palabra;
    vector<char> palabra1;
    vector<char> ans;
    int cad = 2;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '[') {
            cad = 1;
        } else if (s[i] == ']') {
            cad = 2;
        }

        if (cad == 2) {
            if (s[i] != '[' && s[i] != ']') {
                palabra1.push_back(s[i]);
                
            }
        }

        if (cad == 1) {
            if (s[i] != '[' && s[i] != ']') {
                palabra.push_back(s[i]);
            }
        }
    }

    for (int j = 0; j < palabra.size(); j++) {
        ans.push_back(palabra[j]);
    }

    for (int k = 0; k < palabra1.size(); k++) {
        ans.push_back(palabra1[k]);
    }

    return ans;
}

int main() {
    string cadena;
    cin >> cadena;

    vector<char> ans = realCadena(cadena);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }

    return 0;
}
  


