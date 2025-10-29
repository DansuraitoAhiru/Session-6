#include <stdio.h>
#include <math.h>
int main(){
	int a,b, bcnn;
	printf("Nhap so thu 1: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	if(a<=0 || b<=0){
	  printf("So phai > 0");
	  return 1;
	}
	int x=a,y=b;
	while(y!=0){
	  int temp=y;
	  y=x%y;
	  x=temp;
	}
	bcnn=(a*b)/x;
	printf("BCNN = %d", bcnn);
	return 0;
}
