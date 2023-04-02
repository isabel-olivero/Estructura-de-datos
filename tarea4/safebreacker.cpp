#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
/* Laura Isabel Olivero
codigo: 8978537
problem E
*/
struct arr{
	int a[]={};
};

int secuencia,i,j,l,valor,a,b,pistas;
int valores[4] ={};
struct arr intentos[pistas]={};
int tem[]={1,2,3,4,5,6,7,8,9};
vector<int> vec(tem, tem + 9);



int separar(int secuencia){
	for(i = 4, l = 0; i>=1; i--, l++){
	 a = pow(10,i);
	 b = pow(10,i-1);
	valor = secuencia % a / b;
	cout<< valor<<endl;
	valores[l]= valor;	
}
    arr intentos[l]= valores;


return 0;
}


for(s=0; s< pistas; s++){
	for(r=0; s< 4; r++){
		if (intentos[s][r] == intentos[s+1][s]){
		    ans[r] = intentos[s][r];	
		}
		
		else if	(intentos[s][r] == intentos[s+1][s] && (aciertos[h]== aciertos[h+ 1])){
			printf("impossible");
		}
	}
}

int main(){
    int casos,pistas,h,i,j,k, l, m, s,r, t,num;
    int aciertos[]={};
    int casi[]={};
    int ans[]={};
	cin>> casos;
	for(j = 0; j< casos; j++){
		cin>> pistas;
		for(k = 0; k < pistas; k++)
		scanf("%d", &secuencia);
		scanf("%d", &aciertos[i]); 
		scanf("%d", &casi[i]);
		
		separar(secuencia);
		}
	for(h= 0; h< pistas; h++){
		
		 if(aciertos[h] == 4){
		 	for(t = 0; t< 4; t++){
		 		printf("%d", intentos[h][t]);
			 }
		 }
		else if((aciertos[h] < 4 && casi[h] >= 0)&& pistas == 1){
			printf("indeterminate");
		}
		 else if(aciertos[h] == 0 && casi[h] == 0){
		 	for(t = 0; t< 4; t++){
		 		num = intentos[h][t];
		 		vec.pop_back(num)
			 }
		 }
	} 
	for(s=0; s< pistas; s++){
		for(r=0; s< 4; r++){
			if (intentos[s][r] == intentos[s+1][s]){
			    ans[r] = intentos[s][r];	
			}
			
			else if	(intentos[s][r] == intentos[s+1][s] && (aciertos[h]== aciertos[h+ 1])){
				printf("impossible");
			}
	}
}

	for(m= 0; m <4; m++){
			printf("%d", ans[m]);
	}




return 0;	
}




