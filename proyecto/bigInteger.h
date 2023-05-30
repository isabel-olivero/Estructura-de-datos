/* Autor: Laura Isabel Olivero
Fecha de creacion: 27 de abril 
Ultima modificacion: 30 de mayo

Representacion BigIntegreer
*/
#include <iostream>
#include <vector>
#include <string>

#ifndef __BIGINTEGER_H
#define __BIGINTEGER_H


using namespace std;



class BigInteger{
	
	vector<int> big;
	int size;
	
	public:
		
		//constructoras //
		
		BigInteger(const string &); //~
		BigInteger(BigInteger &big);//~
		
		//Modificadoras //
		void add(BigInteger &);//~
		void product(BigInteger &);//~
 		void substract(BigInteger &);//~
		void quotient(BigInteger &);//-
		void remainder(BigInteger &);//-
		void pow(BigInteger &);//-
		
		// Analizadoras //
		string toString ();//~
		int sumarListaValores(vector <BigInteger> &); //~
		int MultiplicarListaValores(vector <BigInteger> &);//~
		
		//Sobrecargas//
		int operator[](int);//~
		BigInteger operator +(BigInteger &a);//~
		BigInteger operator - (BigInteger &a);//~
		BigInteger operator * (BigInteger &a);//-
		BigInteger operator / (BigInteger &a);//-
		BigInteger operator % (BigInteger &a);//-
		bool operator == (BigInteger &a);//~
		bool operator < (BigInteger &a);//~
		bool operator <= (BigInteger &a);//~

};

#endif