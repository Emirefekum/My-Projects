#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main (){
	int a[SIZE][SIZE];
	int ar[SIZE][3];
	int i,j,yer,say;
	int d,b,mod;
	
srand(time(NULL));

printf("\n MENU:\n");
printf("\n (1) Seyrek matristen sikistirilmis matrise.");
printf("\n (2) sikistirilmis matristen seyrek matrise.");
printf("\n (3) cikis yapmak icin.");
scanf("%d",&mod);


for(i=0;i<SIZE;i++)
for(j=0;j<SIZE;j++)
	a[i][j]=0;
	
	
if(mod==1){
	
for(i=0;i<SIZE;i++){//random seyrek matris olu�turma buras� kullan�c�dan da al�nabilir.
	d=rand()%9+1;
	b=rand()%9+1;
	a[i][d]=b;
}
for(i=0;i<SIZE;i++){//al�nan seyrek matrisi yazd�rma 
	printf("\n");
for(j=0;j<SIZE;j++)
	printf("%2d",a[i][j]);
}
for(i=0;i<SIZE;i++){// seyrek matrisi s�k��t�r�lm�� matris yapma
for(j=0;j<SIZE;j++){
	ar[i][0]=i;
	if(a[i][j]!=0)
	ar[i][1]=j,
	ar[i][2]=a[i][j];
}}
	printf("\n");// �evirilen s�k��t�r�lm�� matrisi yazd�rma
for(i=0;i<SIZE;i++){
	printf("\n");
for(j=0;j<3;j++)
	printf("%6d",ar[i][j]);
}}


if(mod==2){
	
for(i=0;i<SIZE;i++)//random s�k��t�r�lm�� matris olu�turma buras� kullan�c�dan da al�nabilir
for(j=0;j<3;j++){
	ar[i][0]=i;
	ar[i][1]=rand()%9+1;
	ar[i][2]=rand()%9+1;
}
	printf("\n");// al�nan s�k��t�r�lm�� matrisi yazd�rma
for(i=0;i<SIZE;i++){
	printf("\n");
for(j=0;j<3;j++)
	printf("%6d",ar[i][j]);
}
	printf("\n");// al�nan s�k��t�r�lm�� matrisi seyrek matrise �evirme
for(i=0;i<SIZE;i++)
a[i][ar[i][1]]=ar[i][2];
	
	
for(i=0;i<SIZE;i++){//olu�turulan seyrek matrisi yazd�rma 
	printf("\n");
for(j=0;j<SIZE;j++)
	printf("%2d",a[i][j]);
}
	

}
if(mod!=1 && mod!=2)
	printf("\ncikis.");
	
return(0);
}
