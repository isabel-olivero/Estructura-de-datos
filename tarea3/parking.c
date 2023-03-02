#include<stdio.h>
/* Laura Isabel Olivero
codigo: 8978537
problem A
*/


 int main (){
 	
	
	 int casos, cant, i, mayor,menor,ans, j;
	 	scanf("%d",&casos);
	
	 	for(j = 0; j < casos; j++){
		 	scanf("%d", &cant);
		 	int tiendas[cant];
		 	
		 	for(i = 0; i < cant; i++){
			 	scanf("%d",&tiendas[i]);
		 	}
		 	
		 	mayor = tiendas[0];
		 	menor =tiendas[0];
		 	for (i = 0; i < cant; i++){
		 		if(tiendas[i]> mayor)
		 			mayor = tiendas[i];
		 		else if (tiendas[i]< menor)
		 			menor = tiendas[i];
		 	ans = (mayor - menor)*2;
		 	}
		printf("%d\n", ans);
	}
}
 	
 /*
 	for(j = 0; j < casos; j++){
	 	scanf("%d", &cant);
	 	int tiendas[cant];
	 	
	 	for(i = 0; i < cant; i++){
		 	scanf("%d",&tiendas[i]);
		 	
		 	mayor = tiendas[0];
	 		menor =tiendas[0];
	 		
		 	if(tiendas[i]> mayor)
	 			mayor = tiendas[i];
	 			
	 		else if (tiendas[i]< menor)
	 			menor = tiendas[i];
	 	ans = (mayor - menor)*2;
	 	}
	 	printf("%d\n", ans);
	}
	
} 



*/