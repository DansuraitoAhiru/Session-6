#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	int choice;
	printf("Nhap so thu nhat: ");
	scanf("%f", &a);
	printf("Nhap so thu hai: ");
	scanf("%f", &b);
	
	do{
	printf(" 1. Tong 2 so \n 2. Hieu 2 so \n 3. Tich 2 so \n 4. Thuong 2 so \n 5. Thoat \n Lua chon cua be la: ");
	scanf("%d", &choice);
	  switch(choice){
		case 1:
			printf("%.2f + %.2f = %.2f \n",a,b, a+b);
		    break;
		case 2:
			printf("%.2f - %.2f = %.2f \n",a,b, a-b);
			break;
		case 3:
		    printf("%.2f * %.2f = %.2f \n",a,b, a*b);
		    break;
		case 4:
			if(b==0)
			    printf("Loi ko the chia cho 0 \n");
			else
			    printf("%.2f / %.2f = %.2f \n",a,b, a/b);
		    break;
		case 5:
			printf("Thoat chuong trinh");
			break;
		default:
			printf("Loi lua chon, chon lai di be \n");
		}}
	while(choice!=5);
	return 0;
}
		
	
