#include<stdio.h>
int main(){

	int j,k,it=0,n[10]={0};
	float a,b,c,e,fa,fb,fc;
/*	fx=x*x-6x+5;
	e=0.047;
	a=1.5;
	b=6;
*/
printf(" fonksiyonun derecesini giriniz(k).\n");
scanf("%d",&k);
for(j=0;j<k+1;j++)
printf("%d. dereceden degiskenin katsayisini giriniz.",j),
scanf("%d",&n[j]);
//fx=n[0]*1+n[1]*x+n[2]*x*x+n[3]*x*x*x+n[4]*x*x*x*x+n[5]*x*x*x*x*x;
printf(" araligin baslangic degerini(a) giriniz.\n");
scanf("%f",&a);
printf("\n araligin bitis degerini(b) giriniz.\n");
scanf("%f",&b);
printf("\n kabul edilen hata payini(e) giriniz.\n");
scanf("%f",&e);
printf("\n");

c=(a+b)/2;
	
fa=n[0]*1+n[1]*a+n[2]*a*a+n[3]*a*a*a+n[4]*a*a*a*a+n[5]*a*a*a*a*a;
fb=n[0]*1+n[1]*b+n[2]*b*b+n[3]*b*b*b+n[4]*b*b*b*b+n[5]*b*b*b*b*b;
fc=n[0]*1+n[1]*c+n[2]*c*c+n[3]*c*c*c+n[4]*c*c*c*c+n[5]*c*c*c*c*c;

	if(fa*fb<0){
	printf("aralikta kok var.");
	printf("\na= %f",a);
	printf("\nb= %f",b);
	printf("\nfa= %f",fa);
	printf("\nfb= %f",fb);
	printf("\nfc= %f",fc);
	
while(b-a>e){
it++;
	if(fc*fa<0)
	b=c;
	else
	a=c;
	
	c=(a+b)/2;
	
fa=n[0]*1+n[1]*a+n[2]*a*a+n[3]*a*a*a+n[4]*a*a*a*a+n[5]*a*a*a*a*a;
fb=n[0]*1+n[1]*b+n[2]*b*b+n[3]*b*b*b+n[4]*b*b*b*b+n[5]*b*b*b*b*b;
fc=n[0]*1+n[1]*c+n[2]*c*c+n[3]*c*c*c+n[4]*c*c*c*c+n[5]*c*c*c*c*c;
}

	printf("\n");
	printf("\na= %f",a);
	printf("\nb= %f",b);
	printf("\nc= %f",c);
	printf("\nfa= %f",fa);
	printf("\nfb= %f",fb);
	printf("\nfc= %f",fc);
	printf("\n");
printf("\n kok degeri yaklasik olarak %f'dir.",c);
printf("\n iterasyon sayisi = %d",it);
}
	else
	printf("aralikta kok yok.");
return(0);
}
