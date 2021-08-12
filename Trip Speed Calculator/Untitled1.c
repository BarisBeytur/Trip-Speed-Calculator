#include <stdio.h>

int main() {
	
	float x,v,t;
	
	printf("Gidilecek mesafeyi giriniz (m) : ");
	
	scanf("%f",&x);
	
	printf("Ulasmak istediginiz sure (sn): ");
	
	scanf("%f",&t);
	
	v = x/t;
	
	printf(" %.2f metrelik mesafeyi %.2f saniyede katetmek icin hiziniz %.2f m/s olmalidir.",x,t,v);	
	
	return 0;
}
