#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
int main (){
	int a[SIZE];
	int i,j,k,n,m=0,b;
	int tmp,mod,it=0;
	int kontrol=0;
	
srand(time(NULL));

printf("\n Calistirmak istediginiz modu secin:\n\n");
printf(" mod1:kullanici girdili dizi\n mod2:random girdili dizi");
scanf("%d",&mod);
if(mod==1){
printf("eleman sayisini giriniz.");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("%d. elemani girin:",i+1),
scanf("%d",&a[i]);

printf("\n\n");
for(i=0;i<n;i++)
printf("%3d ",a[i]);
}

if(mod==2){
n=SIZE;
for(i=0;i<n;i++){

a[i]=rand()%100;// 1 ve 2 haneli bütün sayma sayýlarýndan seçiyor.
b=rand()%4+1;	// 4'de 1 ihtimalle sayýyý negatif seçiyor.
if(b==1)
a[i]=-a[i];
printf("%3d ",a[i]);
}}
//Buraya kadar giriþ dizilerini alma adýmý.
printf("\n");

while(kontrol==0){
kontrol=1;
for(i=it;i<n-it-1;i++){
if(a[i]>a[i+1]){
tmp=a[i];
a[i]=a[i+1];
a[i+1]=tmp;
kontrol=0;
}}
printf("\n");
for(i=0;i<SIZE;i++)
printf("%4d ",a[i]);

for(i=n-it-1; i>it; i--){
if(a[i]<a[i-1]){
tmp=a[i-1];
a[i-1]=a[i];
a[i]=tmp;
kontrol=0;
}}
printf("\n");
for(i=0;i<SIZE;i++)
printf("%4d ",a[i]);
it++;
}

printf("\n\n\n\n");
for(i=0;i<SIZE;i++)
printf("%4d ",a[i]);
printf("\n %d tur atiyor.",2*(it-1)-1);

return(0);
}
