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
	
	Lista l;
	string s;
	
	public:
		datos(Lista b){
			this -> lista = b;
		}
		//constructoras //
		
		BigInteger(string s); 
		BigIntegerb(BigInteger big);
		
		//Modificadoras //
		void add(BigInteger &a);
		void product (BigInteger &a);
 		void substract (BigInteger &a);
		void quotient (BigInteger &a);
		void remainder(BigInteger &a);
		void pow (BigInteger &a);
		
		// Analizadoras //
		string toString ();
		BigInteger sumarListaValores(BigInteger &a, BigInteger &b); 
		BigInteger MultiplicarListaValores(BigInteger &a,BigInteger &b);
		
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