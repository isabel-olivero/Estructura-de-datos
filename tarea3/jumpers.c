#include<stdio.h>
/* Laura Isabel Olivero
codigo: 8978537
problem D
*/

int main(){
	
	int cant, i, j, t, ans;
	scanf("%d", &cant);
	int valores[3000];
	
	for(i = 0; i < cant; i++){
		scanf("%d",&valores[i]);
	}
	for(t = 0; t < cant; t++){
		j = 0;
		if (valores[t] == (cant - j)){
			ans = 1;}
		
			j ++;
		
		}
	if(ans == 1){
		printf("Jolly");}
	else{
		printf("Not jolly");
}
		

	

	
	
}
	
