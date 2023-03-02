#include<stdio.h>
/* Laura Isabel Olivero
codigo: 8978537
problem c
*/
int main(){
	int pos, ans, i;
	int val[3];
	
	scanf("%d", &pos);
	for(i = 0; i < 3; i++){
		scanf("%d", &val[i]);
		pos = val[i] - pos;
	}
	
	ans = (pos*9) + 1080;



	printf("%d" ,ans);	
}