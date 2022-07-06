#include<stdio.h>
#define SIZE 10
int main(){
	float a,fa,fia,fga,fta,it,gt,mt,h;
	int i,j,k;
	float x[SIZE];
//3x^2-4x+5		x=1		h=0.1
printf(" Maksimum 5 olmak uzere turevini bulmak istediginiz fonksiyonun derecesini giriniz= ");
scanf("%d",&k);
for(j=0;j<10;j++)
x[j]=0;
for(j=0;j<k+1;j++)
printf("%d. dereceden degiskenin katsayisini giriniz=",j),
scanf("%f",&x[j]);
//printf("%f.x^5 + %f.x^4 + %f.x^3 + %f.x^2 + %f.x^1 + %f.x^0",n[5],n[4],n[3],n[2],n[1],n[0]);
printf("\n");
printf("fark miktarini giriniz(h)=");
scanf("%f",&h);
printf("\n");
printf("turevini almak istediginiz noktayi giriniz=");
scanf("%f",&a);
printf("\n");

fa= x[0]*1 + x[1]*a + x[2]*a*a + x[3]*a*a*a + x[4]*a*a*a*a + x[5]*a*a*a*a*a;
fta=x[1]*1 + 2*x[2]*a + 3*x[3]*a*a + 4*x[4]*a*a*a + 5*x[5]*a*a*a*a;
fia=x[0]*1 + x[1]*(a+h) + x[2]*(a+h)*(a+h) + x[3]*(a+h)*(a+h)*(a+h) + x[4]*(a+h)*(a+h)*(a+h)*(a+h) + x[5]*(a+h)*(a+h)*(a+h)*(a+h)*(a+h);
fga=x[0]*1 + x[1]*(a-h) + x[2]*(a-h)*(a-h) + x[3]*(a-h)*(a-h)*(a-h) + x[4]*(a-h)*(a-h)*(a-h)*(a-h) + x[5]*(a-h)*(a-h)*(a-h)*(a-h)*(a-h);
//ileri türev alma
it=(fia-fa)/h;
//geri türev alma
gt=(fa-fga)/h;
//merkezi türev alma
mt=(fia-fga)/(2*h);
	
printf("gercek turev = %f",fta);
printf("\n");	
printf("ileri fark turevi = %f",it);
printf("\n");
printf("geri fark turevi = %f",gt);
printf("\n");
printf("merkezi fark turevi = %f",mt);

return(0);
}
