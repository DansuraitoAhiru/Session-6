#include <stdio.h>
#include <math.h>
int main(){
	int i, sum=0;
	for(i=1; i<=100; i++)
	   if(i%3==0 || i%5==0)
	    sum+=i;
	printf("Tong= %d", sum);
}
