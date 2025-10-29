#include <stdio.h>
#include <math.h>
int main(){
	int n, reverseN=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	while(n!=0){
		int temp=n%10;
		reverseN=reverseN*10+temp;
		n/=10;
	}
	while(reverseN!=0){
		int temp=reverseN%10;
		printf("%d ", temp);
		reverseN/=10;
	}
}
	
