#include <string>
#include <iostream>
#include <vector>
using namespace std;
/* Laura Isabel Olivero
codigo: 8978537
problem C
*/
int main(){

	int g,p,piloto, puntuaciones, puestos, sumar, i,j,k,l,m,n,q,r, mayor;
	/*contiene las carreras con el orden de los pilotos*/	
	int carreras[] = {};
	  vector<int> vec(carreras, carreras + g);
	/*contiene el orden de los pilotos*/
	int pilotos[]= {};
	   vector<int> vec1(pilotos, pilotos + p);
	/*contiene los puntos que se le van a sumar a cada puesto*/
	int puntos[] ={};
		vector<int> vec2(puntos, puntos + puestos);
	/*contiene la suma de los puntos de cada piloto, siendo la posicion +1 el numero de piloto */
	int total[] ={};
		vector<int> vec3(total, total + p);
	/*contiene los puntos que se le van a sumar a cada puesto en cada carrera*/
	int tablas[] = {};
		vector<int> vec4(tablas, tablas + puntuaciones);
	int ganadores[] = {};
		vector<int> vec5(ganadores, ganadores + p);
		

	scanf("%d", &g);
	scanf("%d", &p);
	for(j=0; j < g;  j++){
		for(i=0; i < p;  i++){
			scanf("%d", &piloto);
			vec.push_back(piloto);
		}
		vec1.push_back(pilotos);
		pilotos[]= {};
	}
	
	scanf("%d", &puntuaciones);
	scanf("%d", &puestos);
	for(k=0; k < puntuaciones;  k++){
		for(l=0; l < puestos;  l++){
			scanf("%d", &sumar);
			vec2.push_back(sumar);
		}
		vec4.push_back(puntos);
	}
	
	for(n = 0; n < pilotos; n++){
		int suma;
		int llegada = vec.at(n);
		int sum = vec4.at(n);
		for(m = 0; m < llegada.size(); m++){
			/*contiene el numero de piloto*/
			int pos = llegada[m];
			/*contiene los puntos que se le van a sumar a ese piloto*/
			int prem = sum[m];
			int puntaje = vec4.at(pos);
			suma = puntaje + prem;
			int pil = pos -1;
			
			vec3.insert(pil, suma);
		}
			
	}
	
	for(q = 0; q < vec3.size(); q++){
		int mayor = 0;
		int act = vec3[q];
		if(act >vec3[mayor]){
			mayor = q;
		}
	}
		int gan = mayor + 1;
		vec5.push_back(gan);
	
	
	for(r=0; r < vec5.size(); ++){
    	cout << vec1[i] << endl;
	}
return 0;	
}