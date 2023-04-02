#include <iostream>
#include <string>
#include <vector>
/* Laura Isabel Olivero
codigo: 8978537
problem B
*/

using namespace std;

class Equipo{
	public:
	
	string nombre;
	int puntos;
	
	Equipo(){
		nombre ="";
		
	}
	Equipo(string nombre){
			this-> nombre = nombre;
	}
		
	
};

class Juego{
	vector<Equipo>equipo1;
	int punto1;
	vector<Equipo>equipo2;
	int punto2;
	Juego(int punto1, int punto2){
			this->punto1 = punto1;
			this->punto2 = punto2;
			
}
	
	
};

int main(){
	int t,g,i,j,puntos1,puntos2,gol1,gol2,punto1,punto2;
	string nombre, equipo1,equipo2;
	scanf("%d", &t);
	scanf("%d", &g);
	
	for(i= 0; i < t; i++){
		Equipo equi(string nombre);
		scanf("%s", &nombre);
	}
	
	for(j = 0; j < g; j++){
		Juego juego( string equipo1, int punto1,string equipo2,int punto2);
		scanf("%s", &equipo1);
		scanf("%d", &punto1);
		scanf("%s", &equipo2);
		scanf("%d", &punto2);
		
			if (punto1 == punto2){
			puntos1 += 1;
			puntos2 += 1;
		}	
		else if (punto1 < punto2){
			puntos2 += 3;
		}
		
		else if (punto1 > punto2){
			puntos1 += 3;
		}
			
		}	
	}
	 

