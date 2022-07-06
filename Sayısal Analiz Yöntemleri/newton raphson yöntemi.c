#include<stdio.h>
#define SIZE 10
int main(){
	
	float a,fa,fta,e;
	int i,j,k,s=0;
	float n[SIZE];
	float temp,son=1;
//x^3-7x^2+14x-6=0	[0,1]	HATA=0,000001

printf(" fonksiyonun derecesini giriniz.\n");
scanf("%d",&k);
for(j=0;j<SIZE+1;j++)
n[j]=0;
for(j=0;j<k+1;j++)
printf("%d. dereceden degiskenin katsayisini giriniz.",j),
scanf("%f",&n[j]);
printf("%f.x^5 + %f.x^4 + %f.x^3 + %f.x^2 + %f.x^1 + %f.x^0",n[5],n[4],n[3],n[2],n[1],n[0]);
printf("\n");
//fx=n[0]*1+n[1]*x+n[2]*x*x+n[3]*x*x*x+n[4]*x*x*x*x+n[5]*x*x*x*x*x;

printf(" baslangic degeri(a) giriniz.\n");
scanf("%f",&a);
printf("\n kabul edilen hata payini(e) giriniz.\n");
scanf("%f",&e);
printf("\n");

fa= n[0]*1 + n[1]*a + n[2]*a*a + n[3]*a*a*a + n[4]*a*a*a*a + n[5]*a*a*a*a*a;
fta=n[1]*1 + 2*n[2]*a + 3*n[3]*a*a + 4*n[4]*a*a*a + 5*n[5]*a*a*a*a;

	printf(" a = %f\n",a);
	printf(" fa = %f\n",fa);
	printf(" fta = %f\n",fta);
	
	while(son>e){
temp=a;
a = a-(fa/fta);
fa= n[0]*1 + n[1]*a + n[2]*a*a + n[3]*a*a*a + n[4]*a*a*a*a + n[5]*a*a*a*a*a;
fta=n[1]*1 + 2*n[2]*a + 3*n[3]*a*a + 4*n[4]*a*a*a + 5*n[5]*a*a*a*a;
s=s+1;
son=temp-a;
if(son<0)
son=son*-1;
}	
	printf("\n");	
	printf(" a = %f\n",a);
	printf(" fa = %f\n",fa);
	printf(" fta = %f\n",fta);
	printf("iterasyon sayisi = %d\n",s);
	printf("\nbulunan kok degeri yaklasik: %f",a);

return(0);
}
