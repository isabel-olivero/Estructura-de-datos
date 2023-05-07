
#include "bigInteger.h"
#include <iostream>
#include <vector>
#include <string>
#include "lista.h"
using namespace std;

BigInteger:: BigInteger(string s){
	
	int i,a;
	Lista ans();
	
	for( i= 0; i< s.size(); i++ ){
		
		 a = s[i];
		 ans.anxLista(a);
	}
	return ans;	
}

BigInteger::BigIntegerb(BigInteger big){
	
	datos.push_back(big);
	
}

void BigInteger:: add(BigInteger &big){
	
	datos.push_back(big);
}


BigInteger BigInteger:: operator +(BigInteger){
  BigInteger b3(bigA()+ bigB());
  return b3;
}

BigInteger BigInteger:: operator -(BigInteger){
  BigInteger b3(bigA()- bigB());
  return b3;
}

BigInteger BigInteger:: operator *(BigInteger){
  BigInteger b3(bigA() * bigB());;
  return b3;
}

BigInteger BigInteger:: operator /(BigInteger){
  BigInteger b3(bigA() /bigB());;
  return b3;
}

BigInteger BigInteger:: operator %(BigInteger){
  BigInteger b3(bigA() % bigB());;
  return b3;
}


