/*P1.c*/
/*Wander Victor Verçosa Mares*/
/*11811EAU010*/
#include <stdio.h>

int main()
{
	int estado=0, i;
	char bits[256];
	printf("Digite uma sequencia: ");
	scanf("%s", &bits);
	for(i=0; bits[i]!='\0'; i++){
		if(estado==0 && bits[i]==0)
			;
		else if(estado==0 && bits[i]=='1')
			estado=1;
		else if(estado==1 && bits[i]=='0')
			estado=2;
		else if(estado==1 && bits[i]=='1')
			estado=0;
		else if(estado==2 && bits[i]=='0')
			estado=1;
		else if(estado==2 && bits[i]=='1')
			;
	}
	printf("\nA variavel estado eh igual a %d", estado);
	if(estado==0)
		printf("\n%s eh multiplo de 3! ", bits);
	else
		printf("\n%s nao eh multiplo de 3! ", bits);
	return 0;
}
