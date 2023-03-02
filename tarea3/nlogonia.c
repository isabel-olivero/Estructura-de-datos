#include <stdio.h>
/* Laura Isabel Olivero
codigo: 8978537
problem B
*/

int main(){
	int casos,ejex, ejey, x, y, i, ans;
	while(casos > 0) {
		scanf("%d", &casos);
		scanf("%d",&ejex);
		scanf("%d",&ejey);
		for(i = 0; i < casos; i++){
			scanf("%d", &x);
			scanf("%d", &y);
		
		
			
			if ((x > ejex) && (y > ejey))
				printf("NO\n");
			else if((x < ejex) && (y > ejey))
				printf("NE\n");
			else if((x < ejex) && (y < ejey))
				printf("SO\n");
			else if((x > ejex) && (y < ejey))
				printf("SE\n");
			else if((x == ejex) || (y == ejey))
				printf("divisa\n");
			
		}
	}
}
