#include<stdio.h>// emir efe kum
int main(){//bitti

	int n,kont=0;
	int a=2;
	printf("bir sayi giriniz.\n");
	scanf("%d",&n);
	while(n>a){
	if(n%a==0)
	kont=1;//asal deðil ise
	a=a+1;
}
if(n==1)
kont=1;
	if(kont==0)
	printf("girilen sayi asaldir.");
	else
	printf("girilen sayi asal degildir.");
	return(0);
}
