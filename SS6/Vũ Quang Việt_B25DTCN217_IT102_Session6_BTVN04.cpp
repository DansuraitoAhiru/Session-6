#include <stdio.h>
#include <math.h>
int main(){
	int N;
	printf("Nhap 1 so nguyen duong: ");
	scanf("%d", &N);
	if(N<1 || N>10){
		printf("Loi, yeu cau nhap lai");
		return 1;
	}
	for(int i=1; i<=10; i++)
		printf("%d x %d = %d \n", N,i, N*i);
	return 0;
}
