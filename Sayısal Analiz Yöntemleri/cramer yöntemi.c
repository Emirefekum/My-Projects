#include<stdio.h>
#define SIZE 20
int main(){
// örnek: a= 2 -3 2   1 1 -2   3 -2 -1   c= -11 8 -1
	float a[SIZE][SIZE];
	float a2[SIZE][SIZE];
	float x[SIZE];
	float c[1][SIZE];
	float deta,deta2;
	int i,j,k,n,b;

n=3;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
printf("a[%d][%d] giriniz.",i+1,j+1);
scanf("%f",&a[i][j]);
}
printf("\n");
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
printf("%10f",a[i][j]);
}
printf("\n");
}
//buraya kadar matris A'yý açma

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
a2[i][j]=a[i][j];
//buraya kadar matris A kopyalama

deta=a[0][0]*(a[2][2]*a[1][1]-a[1][2]*a[2][1])
	-a[1][0]*(a[0][1]*a[2][2]-a[0][2]*a[2][1])
	+a[2][0]*(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
	printf("\ndeta=%f",deta);
//buraya kadar determinant A bulma

for(i=0;i<n;i++){
printf("\nC%d giriniz.",i+1);
scanf("%f",&c[0][i]);
}
//buraya kadar c matrisi açma
printf("\n");
b=0;
while(b<n){

for(i=0;i<n;i++)
a2[i][b]=c[0][i];

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
printf("%10f",a2[i][j]);
}
printf("\n");
}

deta2=a2[0][0]*(a2[2][2]*a2[1][1]-a2[1][2]*a2[2][1])
	 -a2[1][0]*(a2[0][1]*a2[2][2]-a2[0][2]*a2[2][1])
	 +a2[2][0]*(a2[0][1]*a2[1][2]-a2[0][2]*a2[1][1]);
	 
printf("\ndeta2=%f\n",deta2);
x[b]=deta2 /deta;
b=b+1;

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
a2[i][j]=a[i][j];
//buraya kadar matris A'yý tekrar kopyalama
}

for(i=0;i<n;i++)
printf("\n x[%d]=%4f",i+1,x[i]);
return(0);
}
