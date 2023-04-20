#include<iostream>
using namespace std;
#include "lista.h"

int main(){
	Lista l1,l2,l3;
	
	l1.anxLista(1);
	l1.anxLista(1);
	l1.anxLista(1);
	l2.anxLista(2);
	l2.anxLista(2);
	l2.anxLista(2);
	
	l3 = l1+l2;
	int j;
	
	for(j = 1; j<= l3.longLista(); j++){
	
		printf("%d  ", l3.infoLista(j));
	}
}