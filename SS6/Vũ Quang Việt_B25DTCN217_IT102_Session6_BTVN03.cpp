#include <stdio.h>
#include <math.h>
int main(){
	int N, i, Tong=0;
	printf("Nhap so N: ");
	scanf("%d", &N);
	if(N<1){
		printf("N phai la so duong");
		return 1;
	}
	for(i=1; i<=N; i++)
	   Tong+=i;
	printf("Tong = %d", Tong);
	return 0;
}
