#include<stdio.h>// emir efe kum
#include<stdlib.h>
#include<time.h>
	int main(){//4 random playerla otomatik oynama halinde
	int zar,i;
	int t[60]={0};
	int p1=4,p2=4,p3=4,p4=4;
	int sira=1,k=0,kazanan=0;
				
srand(time(NULL));

		printf("girmemis piyon sayisi: %d,%d,%d,%d   ",p1,p2,p3,p4);
		for(i=0;i<40;i++)
		printf("%d",t[i]);
		printf("   cikan piyon sayisi:  %d,%d,%d,%d  \n",4-p1,4-p2,4-p3,4-p4);
		//buraya kadar boþ tahta
		
		
		
		
		
while(sira<5){
		
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
if(sira==1){
	zar=rand()%6+1;
	printf("%d\n",zar);
for(i=0;i<40;i++){
if(t[i]==1){
t[i]=0;
k=i;
}}
if(k==0)
t[k+zar-1]=1;
else
t[k+zar]=1;
if(k+zar>=40){
t[k+zar]=0,
p1=p1-1;
}
k=0;
sira=2;
		printf("girmemis piyon sayisi: %d,%d,%d,%d   ",p1,p2,p3,p4);
		for(i=0;i<40;i++)
		printf("%d",t[i]);
		printf("   cikan piyon sayisi:  %d,%d,%d,%d  \n",4-p1,4-p2,4-p3,4-p4);	
if(p1==0)
kazanan=1,
sira=5;		
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
if(sira==2){
	zar=rand()%6+1;
	printf("%d\n",zar);
for(i=0;i<40;i++){
if(t[i]==2){
t[i]=0;
k=i;
}}
if(k==0)
t[k+zar-1]=2;
else
t[k+zar]=2;
if(k+zar>=40){
t[k+zar]=0,
p2=p2-1;
}
k=0;
sira=3;
		printf("girmemis piyon sayisi: %d,%d,%d,%d   ",p1,p2,p3,p4);
		for(i=0;i<40;i++)
		printf("%d",t[i]);
		printf("   cikan piyon sayisi:  %d,%d,%d,%d  \n",4-p1,4-p2,4-p3,4-p4);	
if(p2==0)
kazanan=2,
sira=5;		
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
if(sira==3){
	zar=rand()%6+1;
	printf("%d\n",zar);
for(i=0;i<40;i++){
if(t[i]==3){
t[i]=0;
k=i;
}}
if(k==0)
t[k+zar-1]=3;
else
t[k+zar]=3;
if(k+zar>=40){
t[k+zar]=0,
p3=p3-1;
}
k=0;
sira=4;
		printf("girmemis piyon sayisi: %d,%d,%d,%d   ",p1,p2,p3,p4);
		for(i=0;i<40;i++)
		printf("%d",t[i]);
		printf("   cikan piyon sayisi:  %d,%d,%d,%d  \n",4-p1,4-p2,4-p3,4-p4);	
if(p3==0)
kazanan=3,
sira=5;		
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
if(sira==4){
	zar=rand()%6+1;
	printf("%d\n",zar);
for(i=0;i<40;i++){
if(t[i]==4){
t[i]=0;
k=i;
}}
if(k==0)
t[k+zar-1]=4;
else
t[k+zar]=4;
if(k+zar>=40){
t[k+zar]=0,
p4=p4-1;
}
k=0;
sira=1;
		printf("girmemis piyon sayisi: %d,%d,%d,%d   ",p1,p2,p3,p4);
		for(i=0;i<40;i++)
		printf("%d",t[i]);
		printf("   cikan piyon sayisi:  %d,%d,%d,%d  \n",4-p1,4-p2,4-p3,4-p4);	
if(p4==0)
kazanan=4,
sira=5;		
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX





}
if(sira==5)
printf("\nkazanan: p%d",kazanan);
return(0);
	}
