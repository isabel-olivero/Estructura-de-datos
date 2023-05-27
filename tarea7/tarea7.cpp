#include <iostream>
#include <vector>
#include <string>
#include "lista.h"
#include <stack>
#include <queue>

using namespace std;

//Punto 3 
int verificarOrdenadoCola(queue<int> &c){
	
	int num = c.front(), cont = 0, may = 0, men = 0;
	int ans;
	while (cont < 2){
		c.pop();
		if(num < c.front()){
			men += 1;
		}
		
		else if(num > c.front()){
			may += 1;
		}
		cont += 1;
	}
	
	if(men == 2){
		ans = 1;//menor a mayor
	}
	
	else if(may == 2){
		ans = 2; //mayor a menor
	}
	
	else{
		ans = 3; //no esta ordenado
	}
 return ans;
}

//Punto 5
int evaluarExpresion(Lista &l){
	
	int ans;
	queue<int> ints;
	queue<char> sim;
	for(int i= 1; i<= l.longLista(); i++){
		
		if(l.infoLista(i)!=('('||')'||'+'||'-'||'*')){
			int num = l.infoLista(i) - '0';
			ints.push(num);
		}
		else if (l.infoLista(i)!=('('||')'){
			sim.push(l.infolista(i));
		}
		
	}
	while(!ints.empty){
		int num1 = ints.front();
		ints.pop();
		int num2 = ints.front();
		ints.pop();
		
		if(sim.front() == '+'){
			ans = num1 + num2;
		}
		
		else if(sim.front() == '-'){
			ans = num1 - num2;
		}
		
		else if(sim.front() == '*'){
			ans = num1 * num2;
		}
	}
		
	return ans;	
}

	
	
	
}

// Punto 6

/*int verificarRepetidos(queue<int> &col){
	int ans = 0, rep = 0;
	vector<int> nums;
	
	while(! col.empty()){
		int act = col.front();
		
		for(int i= 0; i  < nums.size(); i++){
			if (act == nums[i]){
			rep = 1;
			}
		}
		if(nums.empty() || (rep == 0)){
			nums.push_back(act);
		}
		
		else{
			ans += 1;
		}
		col.pop();
		rep = 0;
			
			
		}
	return ans;			  
}
*/

// Punto 10
stack filtrarNParesCola(queue<int> &col, int n){
	
	int cont = 0;
	stack <int> ans;
	while(cont < n){
		
		if(col.front() %2 == 0){
			ans.push(col.front);
		}
		
		col.pop();	
	}
	
	return ans;
}


int main(){
	int ans, res;
	queue<int> c;
	c.push(1);
	c.push(2);
	c.push(2);
	c.push(7);
	ans = verificarOrdenadoCola(c);
	res = verificarRepetidos(c);
	printf("%d", res);
	
/*
Punto 3
	if(ans == 1){
		printf( "Esta ordenado de menor a mayor");
	}
	
	else if(ans == 2){
		printf( "Esta ordenado de mayor a menor");
	}
	
	else{
		printf("No esta ordenado");
	}
	
*/	
	
	
return 0;
}

