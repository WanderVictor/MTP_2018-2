/*P4.c*/
/* Wander Victor Ver�osa Mares */
/* 11811EAU010 */
#include <stdio.h>
int A(int, int);
int main(){
	int m=0, n=0;
	scanf("%d %d", &m, &n);
	printf("\n\n%d", A(m, n));
	return 0;
}
int A(int m, int n){
	if(m==0) return (n+1);
	else if(m>0 && n==0) return A(m-1, 1);
	else if(m>0 && n>0) return A(m-1, A(m, n-1));
}

