#include "bigInteger.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
    int cont = 1, sig1 = 1, sig2 = 1, ans, ansd = 0, s = 0;
    string num1, num2, ent1, ent2, d1, d2;

    while (cont <= 500) {
        cin >> num1;
        cin >> num2;

        for (int i = 0; i < num1.size(); i++) {
            if (num1[i] == '.') {
                sig1 = 2;
            }

            if (sig1 == 1) {
                ent1 += num1[i];
            } else {
                if (num1[i] != '.') {
                    d1 += num1[i];
                }
            }
        }

        for (int i = 0; i < num2.size(); i++) {
            if (num2[i] == '.') {
                sig2 = 2;
            }

            if (sig2 == 1) {
                ent2 += num2[i];
            } else {
                if (num2[i] != '.') {
                    d2 += num2[i];
                }
            }
        }
        
        BigInteger entero1(ent1);
        BigInteger decimal1(d1);
        BigInteger entero2(ent2);
        BigInteger decimal2(d2);
            
        if (entero1 < entero2){
            ans = 1;
        } 
		else if (entero1 == entero2) {
            ans = 2;
        } 
		else if(entero2 < entero1){
            ans = 3;
        }
    
        if(ans == 2){
        	while((s < d1.size() && s < d2.size()) && (ansd != 2 && ansd != 0)){
        		if(decimal1[s] < decimal2[s]){
        			ansd = 1;
				}
				else if(decimal1[s] == decimal2[s]){
        			ansd = 2;
				}
				if(decimal2[s] < decimal1[s]){
        			ansd = 3;
				}
				s++;
			}
			ans = ansd;
		}

        cout << "Case " << cont << ": ";

        if (ans == 1) {
            cout << "Smaller";
        } else if (ans == 2) {
            cout << "Same";
        } else if (ans == 3) {
            cout << "Bigger";
        }

        cout << endl;

        cont += 1;
    }

    return 0;
}

