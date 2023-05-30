#include "bigInteger.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

BigInteger::BigInteger(const string	&s){
	
	int i,a;
	
	size = s.size();
	for( i= 0; i< s.size(); i++ ){
		
		a = s[i] - '0';
		
		big.push_back(a);	
	
    }
}

BigInteger::BigInteger(BigInteger &num){
	big = vector<int>(num.big);
	size = num.size;
}

/*La operacion add realiza la suma de dos objetos BigInteger 
Toma como parametro un objeto BigInteger (n) y suma su valor al objeto actual (big)
*/
void BigInteger::add(BigInteger& n) {
    int tam, suma = 0, lleva = 0;
    
    if (n.size > big.size()) {
        tam = n.size;
    }
    else {
        tam = big.size();
    }

    for (int i = tam - 1; i >= 0; i--) {
        if (i >= big.size()) {
            suma = n[i] + lleva;
        }
        else if (i >= n.size) {
            suma = big[i] + lleva;
        }
        else {
            suma = big[i] + n[i] + lleva;
        }

        if (suma > 9) {
            big[i] = suma % 10;
            lleva = suma / 10;
        }
        else {
            big[i] = suma;
            lleva = 0;
        }
    }

    if (lleva > 0) {
        big.insert(big.begin(), lleva);
    }
}


/*La operacion product realiza la multiplicacion de dos objetos BigInteger, 
Toma como parametro un objeto BigInteger (a) y multiplica su valor con objeto actual (big)*/

void BigInteger::product(BigInteger &a) {
    BigInteger ans("0");
    
    for (int i = 0; i < big.size(); i++) {
        int lleva = 0;  
        
        for (int j = 0; j < a.size; j++) {
            int multi = big[i] * a.big[j] + lleva;  

            if (i + j < ans.size) {
                multi += ans.big[i + j];
                ans.big[i + j] = multi % 10;
            } else {
                ans.big.push_back(multi % 10);
            }

            lleva = multi / 10;
        }

        while (lleva > 0) {
            ans.big.push_back(lleva % 10);
            lleva /= 10;
        }
    }

    ans.size = ans.big.size();

    while (ans.size > 1 && ans.big[ans.size - 1] == 0) {
        ans.big.pop_back();
        ans.size--;
    }

    big = ans.big;
    size = ans.size;
}



/*La operacion Substract realiza la resta de dos objetos BigInteger, 
Toma como parametro un objeto BigInteger (a) y resta su valor al objeto actual (big)*/

void BigInteger::substract(BigInteger &a) {
    int lleva = 0; 
    int i = big.size() - 1;
    int j = a.size - 1;

    while (i >= 0 || j >= 0) {
        int num = lleva + big[i];

        if (j >= 0)
            num -= a.big[j];

        if (num < 0) {
            num += 10;
            lleva = -1;
        } else {
            lleva = 0;
        }

        big[i] = num;

        i--;
        j--;
    }

    while (big.size() > 1 && big[0] == 0) {
        big.erase(big.begin());
        size--;
    }
}

/* La operacion quotient toma como parametro un BigInteger(a) y lo divide al objeto actual (big)*/
/*
void BigInteger::quotient(BigInteger &a) {
    BigInteger ans("0"); 
    BigInteger resi(*this);

    
    if (a == BigInteger("0")) {
    }

    if (*this == BigInteger("0")) {
        ans = "0";  
    }

    
    while (resi >= a) {
        BigInteger temp("0");  
        int cont = 0;  
        while (resi >= a) {
            resi.substract(a);
            cont++;
        }

        temp.big[0] = cont;

        ans.add(temp); 
    }

    big = ans.big;
    size = ans.size;
}
*/


/*La operacion remainder obtiene el residuo de la división entre dos objetos BigInteger 
Toma como argumento otro objeto BigInteger (a) y actualiza el valor del objeto actual (big) con el residuo resultante.*/
/*
void BigInteger::remainder(BigInteger &a) {
    BigInteger ans("0"); 
    BigInteger resi(*this);

    
    if (a == BigInteger("0")) {
    }

    if (*this == BigInteger("0")) {
        ans = "0";  
    }

    
    while (resi >= a) {
        BigInteger temp("0");  
        int cont = 0;  
        while (resi >= a) {
            resi.substract(a);
            cont++;
        }

        temp.big[0] = cont;

        ans.add(temp); 
    }

    big = resi.big;
    size = resi.size;
}
*/

/*La operacion pow toma como parametro un BigInteger(a) y eleva el valor actual a este BigInteger*/
/*
void BigInteger::pow(BigInteger &a) {
    BigInteger base(*this); 
    BigInteger ans("1");

    while (a > BigInteger("0")) {
        if (a % BigInteger("2") == BigInteger("1")) {
            ans = ans.product(base); 
        }

        base = base.product(base);  
        a = a/BigInteger("2");  
    }

    big = ans.big;
    size = ans.size;
}
*/

/*la operacion tostring retorna una cadena con los digitos del objeto actual*/
string BigInteger::toString(){
	string ans = "";

    for (int i = 0; i < big.size(); i++) {
        char car = big[i] + '0';
        ans += car;
	}
	return ans;
}



/*Toma una lista de BigInteger y retorna el resultado de  sumar respectivamente la lista de valores
recibidos.*/
int BigInteger::sumarListaValores(vector<BigInteger> &lista){
	
    BigInteger suma("0");  
    
    for (int i = 0; i < lista.size(); i++){
        suma = suma + lista[i];
    }

    return suma;
}

/*Toma una lista de BigInteger y retorna el resultado de  multiplicar respectivamente la lista de valores
recibidos.*/
int BigInteger::MultiplicarListaValores(vector<BigInteger> &lista) {
    
	BigInteger multi("1");

    for (int i = 0; i < lista.size(); i++) {
        multi = multi * lista[i];
    }

    return multi;
}

/*Esta operacion sobrecarga el operador [] para la clase BigInteger*/
int BigInteger::operator[](int a){
        return big[a];
    }
    
/*Esta operacion sobrecarga el operador + para la clase BigInteger*/    
BigInteger BigInteger:: operator +(BigInteger &n){
	int tam, suma = 0, lleva = 0;
	BigInteger aux(n);
    
    if (aux.size > big.size()) {
        tam = aux.size;
    }
    else {
        tam = big.size();
    }

    for (int i = tam - 1; i >= 0; i--) {
        if (i >= big.size()) {
            suma = aux[i] + lleva;
        }
        else if (i >= aux.size) {
            suma = big[i] + lleva;
        }
        else {
            suma = big[i] + aux[i] + lleva;
        }

        if (suma > 9) {
            aux.big[i] = suma % 10;
            lleva = suma / 10;
        }
        else {
            aux.big[i] =suma;
            lleva = 0;
        }
    }

    if (lleva > 0) {
        (aux.big).insert((aux.big).begin(), lleva);
    }


	
	return aux;
	
}

/*Esta operacion sobrecarga el operador - para la clase BigInteger*/
BigInteger BigInteger::operator-(BigInteger &a) {
    BigInteger ans(*this); 

    int lleva = 0;  

    int i = ans.size - 1;
    int j = a.size - 1;

    
    while (i >= 0 || j >= 0) {
        int num = lleva + ans.big[i];

        if (j >= 0)
            num -= a.big[j];

        if (num < 0) {
            num += 10;
            lleva = -1;
        } else {
            lleva = 0;
        }

        ans.big[i] = num;

        i--;
        j--;
    }

    while (ans.size > 1 && ans.big[0] == 0) {
        ans.big.erase(ans.big.begin());
        ans.size--;
    }

    return ans;
}


/*Esta operacion sobrecarga el operador * para la clase BigInteger*/
/*
BigInteger BigInteger::operator*(BigInteger &a) {
    BigInteger ans("0");
    BigInteger res("0");

    for (int i = big.size() - 1; i >= 0; i--) {
        BigInteger temp("0");  
        int lleva = 0;  

        
        for (int j = a.size - 1; j >= 0; j--) {
            int multi = big[i] * a.big[j] + lleva;

            lleva = multi / 10;
            multi %= 10;

            temp.big.insert(temp.big.begin(), multi);
            temp.size++;
        }

        if (lleva > 0) {
            temp.big.insert(temp.big.begin(), lleva);
            temp.size++;
        }

        for (int l = 0; l < size - 1 - i; l++) {
            temp.big.push_back(0);
            temp.size++;
        }
        
        res = ans+ temp;
    }

    return ans;
}
*/


/*Esta operacion sobrecarga el operador [] para la clase BigInteger*/
/*
BigInteger BigInteger::operator/(BigInteger &a) {
    BigInteger ans("0"); 
    BigInteger res(*this);

    
    if (a == BigInteger("0")) {
    }

    if (*this == BigInteger("0")) {
        ans = "0";  
    }

    
    while (res >= a) {
        BigInteger temp("0");  
        int cont = 0;  
        while (res >= a) {
            res.substract(a);
            cont++;
        }

        temp.big[0] = cont;

        ans.add(temp); 
    }

    return ans;
}
*/


/*Esta operacion sobrecarga el operador % para la clase BigInteger*/
/*
BigInteger BigInteger::operator %(BigInteger &a) {
    BigInteger ans("0"); 
    BigInteger resi(*this);

    
    if (a == BigInteger("0")) {
    }

    if (*this == BigInteger("0")) {
        ans = "0";  
    }

    
    while (resi >= a) {
        BigInteger temp("0");  
        int cont = 0;  
        while (resi >= a) {
            resi.substract(a);
            cont++;
        }

        temp.big[0] = cont;

        ans.add(temp); 
    }

    return resi;
}
*/

/*Esta operacion sobrecarga el operador == para la clase BigInteger*/
bool BigInteger::operator ==(BigInteger &a){
	bool ans = true; 
	int i = 0;
	
	if(big.size() != a.size){
		ans = false;
	}
	
	else{
		while((i < a.size) && ans){
			
			if(a[i]!= big[i]){
				ans = false;
			}
			i++;
		}
	}
	
  return ans;
}


/*Esta operacion sobrecarga el operador < para la clase BigInteger*/
bool BigInteger::operator <(BigInteger &a){
	bool ans = true; 
	int i = 0;
	
	if(big.size() > a.size){
		ans = false;
	}
	
	else{
		while((i < a.size) && ans){
			
			if(a[i] > big[i]){
				ans = false;
			}
			i++;
		}
	}
	
  return ans;
	
}


/*Esta operacion sobrecarga el operador <= para la clase BigInteger*/
bool BigInteger::operator <= (BigInteger &a){
	
	bool ans = true; 
	int i = 0;
	
	if(big.size() > a.size){
		ans = false;
	}
	
	else if(big.size() != a.size){
		ans = false;
	}
	
	else{
		while((i < a.size) && ans){
			
			if(a[i] > big[i]){
				ans = false;
			}
			
			else if(a[i]!= big[i]){
				ans = false;
			}
			
			i++;
		}
	}
	
  return ans;
	
}












