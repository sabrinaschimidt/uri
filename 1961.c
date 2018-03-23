 #include <stdio.h>
int main(void){
	int P, N, p, a, d, c;
	scanf("%d", &P);
	scanf("%d", &N);
	a=1;
	c=1;
	while(N--){
		scanf("%d", &p);
		d=p-a;
		if (d<0)
			d *= -1;
		if(d>P){
			c=0;
			break;

		}
	a=p;
	}

	if(c == 0)
		printf("GAME OVER\n");
	else
		printf("YOU WIN\n");
	return 0;
}
