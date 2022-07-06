#include<stdio.h>
#define SIZE 10
//örnek==> n=6  x=0,1,2,3,4,5  y=3,4,9,20,39,68
int main(){
	
	int x[SIZE];
	int y[SIZE];
	int delta[SIZE][SIZE];
	int i,j,k,n,d,kontrol=1,p,fp;
	int fak=1;
	
	printf("verilecek deger sayisini giriniz.");
	scanf("%d",&n);

for(i=0;i<n;i++)
x[i]=0,
y[i]=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
delta[i][j]=0;
d=0;
//************************
for(i=0;i<n;i++){
printf("x%d=",i);
scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
printf("y%d=",i);
scanf("%d",&y[i]);
}
for(i=0;i<n-1;i++)
delta[d][i]=y[i+1]-y[i];

while(kontrol==1){
kontrol=0;
for(i=0;i<n-d;i++)
if(delta[d][i]!=delta[d][i+1]){
kontrol=1;
d++;
for(j=0;j<n-d-1;j++)
delta[d][j]=delta[d-1][j+1]-delta[d-1][j];
}}

printf("\n");
for(i=0;i<n;i++)
printf(" %2d",x[i]);
printf("\n");
for(i=0;i<n;i++)
printf(" %2d",y[i]);
printf("\n");

for(i=0;i<n-d;i++){
printf("\n ^%d=",i+1);
for(j=0;j<n-i-1;j++)//full matris için j<n-1 yap
printf("%4d",delta[i][j]);
}

printf("\n\n");
//*********************************************************************
//fx=   y[0]+   (x*d[0][0])/1!+   (x*(x-1)*d[1][0])/2!+   (x*(x-1)*(x-2)*d[2][0])/3! ...;
	
printf(" Fx= %d ",y[0]);
for(i=0;i<d;i++){
printf(" + %d/%d",delta[i][0],fak);
fak=fak*(fak+1);
if(i>=0)
printf("(x");
if(i>=1)
printf("(x-1)");
if(i>=2)
printf("(x-2)");
if(i>=3)
printf("(x-3)");
if(i>=4)
printf("(x-4)");
printf(")");
}
printf("\n");
printf("hesaplanacak noktayi girin.");
scanf("%d",&p);

fp= y[0];
for(i=0;i<d;i++){
if(i==0)
fp = fp + (p*delta[i][0])/1;
if(i==1)	
fp = fp + (p*(p-1)*delta[i][0])/2;
if(i==2)
fp = fp + (p*(p-1)*(p-2)*delta[i][0])/6;
if(i==3)
fp = fp + (p*(p-1)*(p-2)*(p-3)*delta[i][0])/24;
}
printf("\n F(%d)= %d",p,fp);
	
return(0);
}
