/*Laura Isabel Olivero*/
#include <iostream>
#include <vector>
/* esta solucion tiene una complejidad de O(n^2) pues ontiene un ciclo anidado y un ciclo for el cual
con tiene una operacion size la cual tiene una complejidad de n*n */
using namespace std;

class paciente{
		private:
		int posicion;
		int copia;
		
		public:
			paciente();
			int getpos();
			int getcopi();
	}
	
	paciente::paciente(int posicion, int copia){
	this->posicion = posicion;
	this->copia = copia;
	
	int Estudiante::getpos(){
	return posicion;
	}

	string paciente::getcopi(){
	return copia;
	}
	
	
}
void especial(vector<paciente> t,int n){
	int i = t[n].getcopi(); 
	t[1]= paciente(n,i+1);

}
int main(){
	
	int P,C,i,j, turno;
	char caso;
	paciente act;
	vector<paciente> citas;
	
	while((P != 0) && (C != 0)){
		scanf("%d", &P);
		scanf("%d", &C);
		for(i = 1; i <= C; i++){
			act = paciente(i,0);
			citas.push_back(act);
			
		}
		for(j = 1; j <= citas.size; j++){
			
			scanf("%s", &caso);
			
			if(caso == 'N'){
			printf("%d", t[1].getpos());
			}
			
			else if(caso == 'E'){
				scanf("%d", &turno )
				especial(citas, turno);
				
			}		
		}
	}



}