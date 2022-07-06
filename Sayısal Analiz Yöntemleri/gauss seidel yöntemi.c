#include<stdio.h>
#define SIZE 4
int main (){
	float kat[SIZE-1][SIZE];
	float temp[SIZE];
	float x1=0,x2=0,x3=0,e,a=10,b,c;
	int i,j,k,t=0,p,tmp,kont=0;
// -x + 4y - 3z = -8 
// 3x + y - 2z = 9
// x - y + 4z = 1	kabul edilen hata deðeri=0.001
for(i=0;i<SIZE-1;i++)
for(j=0;j<SIZE;j++){
if(j==SIZE-1)
printf("%d. denklemin sonucunu girin: ",i+1);
else
printf("%d. denklemin %d. degiskeninin katsayisini giriniz: ",i+1,j+1);
scanf("%f",&kat[i][j]);
}
printf("hata payini giriniz(e):");
scanf("%f",&e);
	
	
for(i=0;i<SIZE-1;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf("%10f",kat[i][j]);	
}
	

/*for(i=0;i<SIZE-1;i++){
if(kat[i+1][0]>kat[i][0]){
for(j=0;j<SIZE;j++){
temp[j]=kat[i][j];
kat[i][j]=kat[i+1][j];
kat[i+1][j]=temp[j];
}}}*/




//** aþaðýdaki yýldýzlara kadar çapraz maks sýralama (sadece 3 denklem için geçerli)
j=0;
p=0;
if(kat[1][j]>kat[2][j])
p=1;
else
p=2;

if(kat[p][j]>kat[0][j]){
for(k=0;k<SIZE;k++){
temp[k]=kat[0][k];
kat[0][k]=kat[p][k];
kat[p][k]=temp[k];
}}


j=1;
p=0;
if(kat[0][j]>kat[2][j])
p=0;
else
p=2;

if(kat[p][j]>kat[1][j]){
for(k=0;k<SIZE;k++){
temp[k]=kat[1][k];
kat[1][k]=kat[p][k];
kat[p][k]=temp[k];
}}


j=2;
p=0;
if(kat[0][j]>kat[1][j])
p=0;
else
p=1;

if(kat[p][j]>kat[2][j]){
for(k=0;k<SIZE;k++){
temp[k]=kat[2][k];
kat[2][k]=kat[p][k];
kat[p][k]=temp[k];
}}
//*********************************

printf("\n");
printf("\n");
for(i=0;i<SIZE-1;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf("%10f",kat[i][j]);	
}
while(kont==0){
a=x1;
b=x2;
c=x3;
x1=(kat[0][3]-kat[0][1]*x2-kat[0][2]*x3)/kat[0][0];
x2=(kat[1][3]-kat[1][0]*x1-kat[1][2]*x3)/kat[1][1];
x3=(kat[2][3]-kat[2][0]*x1-kat[2][1]*x2)/kat[2][2];
t++;
a=x1-a;
b=x2-b;
c=x3-c;

if(a<0)
a=-a;
if(b<0)
b=-b;
if(c<0)
c=-c;

if(a<=e && b<=e && c<=e)
kont=1;

printf("\n");
printf("\n");
printf("%d. iterasyon icin xler: ",t);
printf("X1=%f ",x1);
printf("X2=%f ",x2);
printf("X3=%f ",x3);
printf("\n");
}
printf("son deltaX1=%f ",a);
printf("son deltaX2=%f ",b);
printf("son deltaX3=%f ",c);

return(0);
}
