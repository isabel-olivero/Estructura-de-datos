//punto 3
#include<iostream>
using namespace std;
#include "lista.h"

/* La operacion insertarEnListaOrdenada tiene una complejidad de O(n) pues posee las operaciones inslista e infolista 
las cuales tienen una complejidad de O(n) y no se ecuentran ejecutandose en la misma linea por lo que no llega a ser O()n^2*/
Lista insertarEnListaOrdenada(Lista &l, int v){
	int i, elem, t;
	while(t != 1){
		i = 1;
		
		if(l.infoLista(i)>v){
			if (i == 1){
			l.insLista(v, 1);
			}
			else{ 
				int m = i - 1;
				l.insLista(v, m);
			}
			t = 1;	
		}
	}
	return l;
}
	

int main(){
	
	Lista l,m;
		l.anxLista(1);
		l.anxLista(2);
		l.anxLista(4);
		l.anxLista(5);
	
	m = insertarEnListaOrdenada(l, 3);
	int j;
	for(j= 1; j < m.longLista(); j++){
		printf("%d", m.infoLista(j));
	}
	return 0;
}

