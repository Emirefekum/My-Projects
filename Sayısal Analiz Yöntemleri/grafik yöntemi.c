#include<stdio.h>
#include<math.h>
int main(){
	/*
	f(x)=x.x-6x+5
	E=0.047
	5. iterasyon
	x0=a=1.5
	deltax==dx=0.75
	*/
	int i=1,j,k,n[10]={0};
	float a,b,dx,e,fa,fb;

printf(" fonksiyonun derecesini giriniz.\n");
scanf("%d",&k);
for(j=0;j<k+1;j++)
printf("%d. dereceden degiskenin katsayisini giriniz.",j),
scanf("%f",&n[j]);
//fx=n[0]*1+n[1]*x+n[2]*x*x+n[3]*x*x*x+n[4]*x*x*x*x+n[5]*x*x*x*x*x;
printf(" baslangic degeri(a) giriniz.\n");
scanf("%f",&a);
printf("\n artis miktari(dx) giriniz.\n");
scanf("%f",&dx);
printf("\n kabul edilen hata payini(e) giriniz.\n");
scanf("%f",&e);
printf("\n");

b=a+dx;
fa=n[0]*1+n[1]*a+n[2]*a*a+n[3]*a*a*a+n[4]*a*a*a*a+n[5]*a*a*a*a*a;
fb=n[0]*1+n[1]*b+n[2]*b*b+n[3]*b*b*b+n[4]*b*b*b*b+n[5]*b*b*b*b*b;
	printf(" a= %f\n",a);
	printf(" b= %f\n",b);
	printf(" fa= %f\n",fa);
	printf(" fb= %f\n",fb);
	
while(b-a>e){
	while(fa*fb>0){
	a=a+dx;
	b=b+dx;
fa=n[0]*1+n[1]*a+n[2]*a*a+n[3]*a*a*a+n[4]*a*a*a*a+n[5]*a*a*a*a*a;
fb=n[0]*1+n[1]*b+n[2]*b*b+n[3]*b*b*b+n[4]*b*b*b*b+n[5]*b*b*b*b*b;
	printf("\n");
	printf(" a= %f\n",a);
	printf(" b= %f\n",b);
	printf(" fa= %f\n",fa);
	printf(" fb= %f\n",fb);
	
}
dx=dx/2;
b=a+dx;
fb=n[0]*1+n[1]*b+n[2]*b*b+n[3]*b*b*b+n[4]*b*b*b*b+n[5]*b*b*b*b*b;
i=i+1;
}
	printf("\n");
	printf(" a= %f\n",a);
	printf(" b= %f\n",b);
	printf(" fa= %f\n",fa);
	printf(" fb= %f\n",fb);
	printf("\n");
	printf(" i= %d\n",i);
	printf(" kok degeri yaklasik olarak %f'dir.",b);

return(0);
}
