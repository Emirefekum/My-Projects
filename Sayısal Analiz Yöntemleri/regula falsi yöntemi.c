#include<stdio.h>
#define SIZE 10
int main(){
	float a,b,c,fa,fb,fc,e;
	int i,j,k,n;
	float x[SIZE];
//x^3-2x^2-5	[2,3]	kabul edilen hata deðeri=0.01
for(i=0;i<9;i++)
x[i]=0;
printf(" fonksiyonun derecesini giriniz.\n");
scanf("%d",&k);

for(j=0;j<k+1;j++)
printf("%d. dereceden degiskenin katsayisini giriniz.",j),
scanf("%f",&x[j]);

printf("\n");
printf(" baslangic degeri(a) giriniz.\n");
scanf("%f",&a);
printf(" bitis degeri(b) giriniz.\n");
scanf("%f",&b);
printf("\n kabul edilen hata payini(e) giriniz.\n");
scanf("%f",&e);
printf("\n");
	
fa= x[0]*1 + x[1]*a + x[2]*a*a + x[3]*a*a*a + x[4]*a*a*a*a + x[5]*a*a*a*a*a;
fb= x[0]*1 + x[1]*b + x[2]*b*b + x[3]*b*b*b + x[4]*b*b*b*b + x[5]*b*b*b*b*b;
	
if(fa*fb<0){
while(b-a>e){
c=(b*fa-a*fb)/(fa-fb);
fc= x[0]*1 + x[1]*c + x[2]*c*c + x[3]*c*c*c + x[4]*c*c*c*c + x[5]*c*c*c*c*c;	

if(fa*fc<0)
b=c,
fb= x[0]*1 + x[1]*b + x[2]*b*b + x[3]*b*b*b + x[4]*b*b*b*b + x[5]*b*b*b*b*b;
if(fa*fc>0)
a=c,
fa= x[0]*1 + x[1]*a + x[2]*a*a + x[3]*a*a*a + x[4]*a*a*a*a + x[5]*a*a*a*a*a;

}}
else
printf("\naralikta kok yok.");

printf("\n");
printf("a = %f\n",a);
printf("fa = %f",fa);
printf("\n");
printf("b = %f\n",b);
printf("fb = %f",fb);
printf("\n");
printf("kok degeri yaklasik = %f",(a+b)/2);

return(0);
}
