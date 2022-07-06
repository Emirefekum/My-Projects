#include<stdio.h>
#define SIZE 100
//f(X)=x^3+2x^2-x-2		(-2,-1)		n=4
int main(){
	int i,j,k,n,mod=0;
	float a,b,h;
	float x[SIZE],y[SIZE],kat[SIZE];
	float ALAN=0;	
	printf("integral denkleminin derecesini giriniz:");
	scanf("%d",&k);
for(j=0;j<SIZE;j++)
kat[j]=0;	
for(j=0;j<k+1;j++)
	printf("%d. dereceden degiskenin katsayisini giriniz.",j),
	scanf("%f",&kat[j]);

printf("kac parcaya bolmek istediginizi girin(n):");
scanf("%d",&n);
printf("integralin sinirlarini giriniz(a),(b):\n");
scanf("%f%f",&a,&b);

printf("Kullanmak istediginiz yontemi secin.\n\n");
printf("Trapez yontemi icin:1\nSimpson(1/3) yontemi icin:2\n");
scanf("%d",&mod);
h=(b-a)/n;
for(i=0;i<SIZE;i++)
	x[i]=0,
	y[i]=0;

x[0]=a;
for(i=1;i<n+1;i++)
	x[i]=x[i-1]+h;
	
for(i=0;i<n+1;i++)
	y[i]= kat[0]*1 + kat[1]*x[i] + kat[2]*x[i]*x[i] + kat[3]*x[i]*x[i]*x[i] +	
		  kat[4]*x[i]*x[i]*x[i]*x[i] + kat[5]*x[i]*x[i]*x[i]*x[i]*x[i];


if(mod==1){
//alan=h*[(y0+yson)/2 +y1+y2+y3+....yson-1]
ALAN=(y[0]+y[n])/2;
for(i=1;i<n;i++)
ALAN=ALAN + y[i];
ALAN=ALAN*h;
}

if(mod==2){
//alan=h/3*[y0+yson + 4*(y1+y3+y5...) + 2*(y2+y4+y6....)]
ALAN=(y[0]+y[n]);
for(i=1;i<n;i++)
if(i%2==0)
ALAN=ALAN + 2*y[i];
else
ALAN=ALAN + 4*y[i];
ALAN=ALAN*h*1/3;
}
	
	
printf("h=%f\n\n",h);

for(i=0;i<n+1;i++)
printf("\nx[%d]=%f",i,x[i]);
printf("\n");
for(i=0;i<n+1;i++)
printf("\ny[%d]=%f",i,y[i]);	
	
printf("\n\n\n n=%d icin ALAN=%f",n,ALAN);
	
return(0);
}
