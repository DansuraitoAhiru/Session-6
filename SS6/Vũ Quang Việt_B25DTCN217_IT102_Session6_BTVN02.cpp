#include <stdio.h>
int main(){
	int secret=69;
	int guess;
	do{
		printf("Nhap vao 1 so: ");
		scanf("%d", &guess);
	if(guess!=secret)
	   printf("Sai roi be oi, try again baby \n");
	}
	while(guess!=secret);
	   printf("Chuc mung, be lam tot lam! \n");
	return 0;
}
