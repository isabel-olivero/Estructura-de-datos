/* Autor: Laura Isabel Olivero
Fecha de creacion: 27 de abril 
Ultima modificacion: 30 de abril

Representacion BigIntegreer
*/
#include <iostream>
#include <vector>
#include <string>

#ifndef __bigInteger_H
#define __bigInteger_H

#include "lista.h"


using namespace std;

typedef int Elemento;

class BigInteger{
	
	lista l;
	string s;
	
	public:
		datos(Lista b){
			this -> lista = b;
		}
		//constructoras //
		
		BigInteger(string s); 
		BigIntegerb(BigInteger big);
		
		//Modificadoras //
		void add(BigInteger);
		void product (BigInteger);
 		void substract (BigInteger);
		void quotient (BigInteger);
		void remainder(BigInteger);
		void pow (BigInteger);
		
		// Analizadoras //
		string toString ();
		int sumarListaValores(BigInteger); 
		int MultiplicarListaValores(BigInteger);
		
		//Sobrecargas//
		BigInteger operator +(BigInteger);
		BigInteger operator - (BigInteger);
		BigInteger operator * (BigInteger);
		BigInteger operator / (BigInteger);
		BigInteger operator % (BigInteger);
		bool operator == (BigInteger);
		bool operator < (BigInteger);
		bool operator <= (BigInteger);

};

#endif