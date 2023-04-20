// punto 1-2
#include<iostream>
using namespace std;
#include "lista.h"

/*   ya que las operaciones anxlista, infoLista y logLista tienen una complejidad O(n) se puede afirmar
que la operacion contarOcurrencias tiene una complejidad de O(n^2) pues posee un ciclo for que se ejecuta n veces y en
el mismo posee la operacion longLista

Por otro lado la operacion obtenerMenores tiene una complejidad de O(n^2) pues al igual que la anterior posee un ciclo for que se ejecuta n veces y en
el mismo posee la operacion longLista y poseee la operacion anxLista que como parametro posee la operacion infoLista */

int contarOcurrencias(Lista &l, int v){
		
		int i,cont = 0;
		
		for(i = 1; i <= l.longLista(); i++){
			if(l.infoLista(i) == v){
				cont ++;
			}
		}
	return cont;	
	}

Lista obtenerMenores(Lista &l, int v){
	int i, elem;
	Lista ans;
	for(i = 1; i <= l.longLista(); i++){
		elem = l.infoLista(i);
		if(elem < v){
			ans.anxLista(l.infoLista(i));
		}
	}
	return ans;
}



 int main() {
 	Lista l, list;
		l.anxLista(1);
		l.anxLista(3);
		l.anxLista(2);
		l.anxLista(5);
		l.anxLista(4);
		l.anxLista(6);
		l.anxLista(5);
		
		printf("%d\n", contarOcurrencias(l, 5));
	list = obtenerMenores(l, 6);
	int j;
	for(j = 1; j<= list.longLista(); j++){
	
		printf("%d  ", list.infoLista(j));
	}

return 0;	
} 