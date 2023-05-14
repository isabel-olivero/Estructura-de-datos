/*Laura Isabel Olivero*/
#include <iostream>
#include <string>
#include <vector>
/*esta solucion tiene una complejidad e de O(n^2) pues a pesar de que no contiene ciclos anidados contiene un ciclo
que contiene la operacion size la cual tiene complejidad lineal lo que hace que sea n*n */
using namespace std;


vector<char> realCadena(string s){
	
	vector<char> palabra;
	vector<char> palabra1;
	vector<char> ans;

	
	int i,j,k,cad = 2;
	
	for(i= 0; i< s.size(); i++){
		
		if(s[i] == '['){
			cad = 1;
		}
		
		else if(s[i] == ']'){
			cad = 2;
		}
		
		if(cad == 2){
			if((s[i] == '[')or (s[i]== ']')){
			
				palabra1.push_back(' ');	
			}
			else{
			palabra1.push_back(s[i]);
			printf("%s", s[i]);	
			}
			
			
			
		}
		if(cad == 1){
			
			if((s[i] == '[')or (s[i]== ']')){
			
				palabra.push_back(' ');	
			}
			
			else{
			palabra.push_back( s[i]);	
			}
		}
	}
	for(j = 0; j < palabra1.size(); j++){
		
		ans.push_back(palabra1[j]);
	}
	
	for(k = 0; k < palabra.size(); k++){
		
		ans.push_back(palabra[k]);
	}
	
	return ans;
		
}

int main(){
	int i;
	string cadena;

	cin >>cadena;
	
	
	vector<char> ans = realCadena(cadena);
	
	for(i = 0; i < ans.size(); i++){
		cout << ans[i] << endl;
	}
return 0;	
}
  


