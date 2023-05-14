/*Laura Isabel Olivero*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*Esta solucion tiene una complejidad O(n^2) ya que en el proceso de lectura se puede encontar un ciclo anidado
locual lo combierte en n*n */


int possible(vector<int> &v){	
	string res;
	queue<int> espera;
	queue<int> ans;
	int m,pasa = 1, i = 0,flag = 1;
	
	while((flag != v.size()) ){
		
		m = i+1;
		
		if(v[i] == m){
			ans.push(m);
			i++;
			flag ++;
		}
		
		else if(v[i] < m ){
			
			int t = espera.front();
			
			if(t == v[i]){
				ans.push(t);
				espera.pop();
				i++;
				flag ++;	
			}
			
			else{
				int falta = v.size() - flag;
				flag += falta;
				pasa = 0;
			}
		}
		
		else{
			espera.push(m);
			i++;
		}
			
	}
	
	
		
	return pasa;
}



int main(){
	int numero, casos,i,j;
	scanf("%d", &casos);
	vector<int> trenes;
	//while(numero > 0){
	
	
		for(i = 0; i < casos; i++){
			scanf("%d", &numero);
			
			if(numero == 0){
				i += casos;
				}
			trenes.push_back(numero);	
		}
		
		int ans = possible(trenes);
		
			if(ans == 0){
				printf("No");
			}
			else{
				printf("Yes");
			}
	//}
return 0;
}