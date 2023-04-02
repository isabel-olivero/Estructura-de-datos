#include <string>
#include <iostream>
#include <vector>
using namespace std;
/* Laura Isabel Olivero
codigo: 8978537
problem A
*/
string codigo;
int valores[] = {};
	vector<int> vec(valores, valores + 10);
string morse[]={
	        ".-", "-...", "-.-.", "-..",
	        ".", "..-.", "--.", "....", "..",
	        ".---", "-.-", ".-..", "--", "-.",
	        "---", ".--.", "--.-", ".-.", "...",
	        "-", "..-", "...-", ".--", "-..-",
	        "-.--", "--..", "-----", ".----", "..---",
	        "...--", "....-", ".....", "-....", "--...",
	        "---..", "----.", ".-.-.-", "--..--", "---...",
	        "..--..", ".----.", "-....-", "-..-.", ".--.-.",
	        "-...-", ".-..-.", "-.-.--", "  "};
string esp[]= {"A", "B", "C", "D",
	                "E", "F", "G", "H", "I",
	            	"J", "K", "L", "M", "N",
	                "O", "P", "Q", "R", "S",
	        		"T", "U", "V", "W", "X",
	                "Y", "Z", "0", "1", "2",
	            	"3", "4", "5", "6", "7",
	                "8", "9", ".", ",", ":",
	                "?", "'", "-", "/", "@",
	                "=", "\"","!", " "};
	                
										
				      
int obtener(){

	string letra = "";
	int i,j;
	
	for(i= 0; i < codigo.size(); i++ ){
		
		
	   	if (codigo[i]!= esp[47]){
	   		letra += codigo[i];
	   	}
	   	
	   	else if (codigo[i] == esp[47]&& codigo[i+1]== 0){
	   		for(j = 0; j < 48; j++){
	   		if (letra == morse[j]){
	   			vec.push_back(j);
	   		}
	   			vec.push_back(47);
	   		}
	   }
	   	
	   	
	 if (codigo[i] == esp[47]&& codigo[i+1]== 0){
			for(j = 0; j < 48; j++){
	   		if (letra  == morse[j]){
	   			vec.push_back(j);
	   		}
	   			vec.push_back(47);
	   		}
		}
		
		else{
			for(j = 0; j < 48; j++){
	   		if (letra == morse[j]){
	   			vec.push_back(j);
	   		}
			letra = "";
			}	
		
		}
	

	}
	return valores;
}

int main () {
	
	string mensaje = "";
	int k,l,pos,casos;
	
	scanf("%d",&casos);
	while(l < casos + 1){
	
		getline(cin,codigo);
		
		obtener();
		int t = vec.size();
		for(k = 0; k < t; k++){
			pos = vec.at(k);
			mensaje += esp[pos];
			
		}
		printf("Message #%d\n", l);
	   	cout<< mensaje<< endl;
	   	l ++;
	}


return 0;
		
}
		

