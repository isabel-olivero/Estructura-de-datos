/*Laura Isabel Olivero*/
#include <iostream>
#include <vector>
/* la complegidad de esta soluicon es de O(n^3), pues contiene tres ciclos for anidados*/
using namespace std;

int posibles(vector<string> &dic, vector<char> &letras){
	
	int i, j,h, cont= 0, total = 0;
	char palabra, letra;
	
	for(i = 0; i< dic.size(); i++){
		for(h = 0; h < dic[i].size(); h++){
			palabra = dic[i][h];
			
			for( j= 0; j < letras.size(); j++){
				
				if( letras[j] == palabra){
					cont ++;
				}
				
				if(cont == dic[i].size()){
				
				    total ++;
				}
				
			}
		}
	}
	
	return total;
	
}



int main(){
	
	string palabra;
	char letra;
	vector<string> palabras;
	vector<char> letras;
	
	while(palabra != "#"){
		scanf("%s", &palabra);
		palabras.push_back(palabra);
	} 
	
	while(letra != '#'){
		scanf("%s", &letra);
		letras.push_back(letra);
	}
	
	printf("%d", posibles(palabras, letras));
	
}