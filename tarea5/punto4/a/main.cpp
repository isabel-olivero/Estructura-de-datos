#include<iostream>
using namespace std;
#include "lista.h"

void concatenarListas(Lista l1,Lista l2){
	
	int i;
	for(i = 1; i <= l2.longLista(); i++){
		insLista(l2.infoLista(i),l1.longlista());
	}
}

int main(){
	Lista l1,l2,m;
	
	l1.anxLista(1);
	l1.anxLista(1);
	l1.anxLista(1);
	l2.anxLista(2);
	l2.anxLista(2);
	l2.anxLista(2);
	
	m = concatenarListas(l1,l2);
	int j;
	
	for(j = 1; j<= m.longLista(); j++){
	
		printf("%d  ", m.infoLista(j));
}
}