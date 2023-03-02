#include <stdio.h>
/* Laura Isabel Olivero
codigo: 8978537
problem E
*/

int main(){
	int casos,cant,i, j,h, t,ans,petrol, estacion = 0;
	int disponible[100000];
	int necesaria[100000];

	scanf("%d", &casos);
	for (t= 1; t <= casos; t++){
		scanf("%d", &cant);
		int c = 0;
		for(i= 0; i < cant; i++){
		 	scanf("%d", &disponible[i]);
		 }
		for(h= 0; h < cant; h++){
		 	scanf("%d", &necesaria[h]);
		 }
		 for(j= 0; j < cant; j++){
		 	petrol = 0;
		 	
			if((petrol && disponible[j])< necesaria[j]){
				ans = 0;
				estacion ++;}
			
			if((petrol || disponible[j]) >= necesaria[j]){
				petrol += disponible[j];
				ans= 1;}

		}
		c ++;
		
		if (ans == 0)
			printf("Case %d: Not possible", c);
		else if(ans == 1)
			printf("Case %d: Possible from station %d", c, estacion);
	}
	

}