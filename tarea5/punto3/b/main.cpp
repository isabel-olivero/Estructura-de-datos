//punto 3b

#include<iostream>
using namespace std;
#include "lista3b.h"

int main(){
	
	Lista l,m;
		l.insListaOrdenada(1);
		l.insListaOrdenada(2);
		l.insListaOrdenada(4);
		l.insListaOrdenada(5);
	
	insListaOrdenada(3);
	int j;
	for(j= 1; j < m.longLista(); j++){
		printf("%d", m.infoLista(j));
	}
	return 0;
}
