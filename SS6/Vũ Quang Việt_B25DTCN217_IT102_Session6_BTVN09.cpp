#include <stdio.h>
#include <math.h>
int main(){
	int a=0,b=0,c=0,choice;
	while(choice != 6){
		printf(" 1.Nhap 3 so nguyen \n 2.Tinh tong 3 so nguyen \n 3.Tinh trung binh cong 3 so \n 4.In ra so nho nhat \n 5.In ra so lon nhat \n 6.Thoat \n Moi be chon lua: \n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap so thu 1: ");
				scanf("%d", &a);
				printf("Nhap so thu 2: ");
				scanf("%d", &b);
				printf("Nhap so thu 3: ");
				scanf("%d", &c);
			    break;
			case 2:
				if(a==0 && b==0 & c==0)
				  printf("Vui long be nhap 3 so giup anh! \n");
				else 
				  printf("Tong = %d \n", a+b+c);
				break;
			case 3:
				if(a==0 && b==0 & c==0)
				  printf("Vui long be nhap 3 so giup anh! \n");
				else
				  printf("TB cong= %.2f \n", (a+b+c)/3.0 );
				break;
			case 4:
				if(a==0 && b==0 && c==0)
				  printf("Vui long be nhap 3 so giup anh! \n");
				else {
				   int min=a;
				   if(b<min) min=b;
				   if(c<min) min=c;
				printf("Min= %d \n", min);
				}
				break;
			case 5:
				if(a==0 && b==0 &c==0)
				   printf("Vui long be nhap 3 so giup anh! \n");
				else{
					int Max=a;
					if(b>Max) Max=b;
					if(c>Max) Max=c;
					printf("Max = %d \n", Max);
				}
				break;
			case 6:
				printf("Sayonara!!!");
				break;
		default:
		   printf("Lua cho ko hop le. Nhap lai ik! \n");
		}}
	}	
