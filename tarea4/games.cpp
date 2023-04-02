#include <string>
#include <iostream>
#include <vector>
using namespace std;
/* Laura Isabel Olivero
codigo: 8978537
problem D
*/

string esp[]= {"A", "B", "C", "D",
	                "E", "F", "G", "H", "I",
	            	"J", "K", "L", "M", "N",
	                "O", "P", "Q", "R", "S",
	        		"T", "U", "V", "W", "X",
	                "Y", "Z"};
 int main(){
 	int casos,i,j;
 	string ans;
 	string cadenas[]={};
 	scanf("%d",&casos);
 	for(i=0;i < casos; i++){
 		string cadena;
 		getline(cin,cadena);
 		cadenas[i] += cadena;	
 	}
 	
 
 	int mit = (sizeof(cadenas)) / 2;
 	while (ans > cadenas[mit] && ans < cadenas[mit + 1]){
 		ans = cadenas[mit][0];
 		for(j=0;j < sizeof(cadenas); j++){
 			if(ans < cadenas[mit] && ans < cadenas[mit + 1]){
 				ans += esp[j];
		 }
 			cout<< ans<< endl;
	 }
}
 	
 } 