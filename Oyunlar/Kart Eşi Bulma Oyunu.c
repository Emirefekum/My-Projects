#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	char a[8][8]={'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'};
	int b[8][8]={0};
	int c[16][8][8]={0};
	int i,j,l,x,y,n,m;
	int sira=1;
	int d=1,kontrol=0;
	int k=0;
	int toplam=0;
	int skor=0,skoro=0,skorb=0;
	int mod=0;
	int moda,modb,modc,modh,mode;
	int h=0,haf=0,ck=1,p=0,hamle=0;
	
	printf("\n     			KART ESI BULMA OYUNUNA HOS GELDINIZ \n\n");
	printf("\n 				Oyunun Kurallari:\n\n 			-sirasi gelen oyuncu sirayla 2 adet kart secer\n			 kartlar eslesirse 1 puan kazanir ve\n			 tekrar secim yapma hakki kazanir.\n			-kartlar eslesmez ise secim sirasi rakibe gecer.\n			-yeterli puana ilk ulasan oyunu kazanir.\n");
	printf("\n			OYNAMAK ISTEDIGINIZ OYUN MODUNU SECIN \n\n mod 1: bilgisayara karsi. \n mod 2: PvP(2 oyunculu)\n ");
	scanf("\n%d",&mode);
	printf("\n			 OYNAMAK ISTEDIGINIZ ZORLUGU SECIN \n");
	printf("\n Kolay icin: 1 ****");
	printf("\n Orta icin:  2 ******");
	printf("\n Zor icin:   3 ********\n");
	scanf("%d",&mod);
		
	if(mod==1){//kolay mod de�i�ken de�erleri
		modh=2;
		moda=4;
		modb=8;
		modc=72;
}
	if(mod==2){//orta m�od de�i�ken de�erleri
		modh=6;
		moda=6;
		modb=18;
		modc=342;
}
	if(mod==3){//zor mod de�i�ken de�erleri
		modh=16;
		moda=8;
		modb=32;
		modc=1056;
}
	srand(time(NULL));
	
for(i=0;i<moda;i++)
for(j=0;j<moda;j++)
b[i][j]=rand()%modb+1;

	while(toplam!=modc){
	kontrol=0;
	toplam=0;
	k=0;
	d=1;
	while(k<500){

	for(i=0;i<moda;i++){
	for(j=0;j<moda;j++){
		
		if(b[i][j]==d){
		kontrol=kontrol+1;
		if(kontrol>2){
		b[i][j]=b[i][j]%modb+1;
	}}}}
	kontrol=0;
	d=d+1;
	k=k+1;
	}
	
for(i=0;i<moda;i++)
for(j=0;j<moda;j++)
toplam=toplam+b[i][j];	
//printf("\n yeni toplam %d",toplam);
}
	//BURAYA KADAR TAHTADAK� SAYILARIN TOPLAMI 72 OLANA KADAR D�N�YOR.
	
	for(i=0;i<moda;i++)//           OYUN TAHTASININ A�IK HAL�(SAYILAR)
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4d",b[i][j]);
		else
		printf("%4d",b[i][j]);
	}
	printf("\n");
	
	for(i=0;i<moda;i++)//			OYUN TAHTAASININ KAPALI HAL�(*)
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
	}
	
						//BURAYA KADAR AXA OYUN TAHTASINI 1'DEN A^2/2'YE KADAR OLAN SAYILARI 2'�ER KEZ TEKRAR EDEREK RASTGELE D�ZENDE HAZIRLAMASI GEREK�YOR.

		while(skor<(modb/2)+1){
		
		if(sira==1){
printf("\n secim sirasi: oyuncu 1");
	printf("\n Acmak istediginiz ilk kartin once satir sonra sutun numarasini girin.\n");	
	scanf("%d",&n);
	scanf("\n%d",&m);
	
	while(n>moda||m>moda){				// girilen de�erin dizinin boyutlar�n� a�mad���n� kontrol etme ad�m�.
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){// haf�za'da bulunan haf de�erine sahip matristeki bilgiyi zaman� geldi�inde unutma ad�m�.
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];// haf�zaya girilen de�eri not etme ad�m�.
haf=haf+1;
if(haf>=modh)
haf=0;

x=n;
y=m;
		
	for(i=0;i<moda;i++)				// se�ilen ilk kart�n a��ld�ktan sonraki tahtan�n g�r�n�m�
	for(j=0;j<moda;j++)
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);
		
	printf("\n Acmak istediginiz ikinci kartin once satir sonra sutun numarasini girin.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
	
	while(n>moda||m>moda){
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];
haf=haf+1;
if(haf>=modh)
haf=0;

	for(i=0;i<moda;i++)	
	for(j=0;j<moda;j++)
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){		//ilk a��lan kart�n ikinci a��lacak kartla ayn� kart olmamas�n� kontrol etme ad�m�.
	printf("\n tebrikler dogru tahmin.");
	hamle=hamle+1;
	skoro=skoro+1;
	printf("\n oyuncu 1'in mevcut puani:%d ",skoro);
	a[x-1][y-1]='-';	// kartlar e�le�ti�nde se�ilen konumdaki 2 kart� da bo�luk '-' ad�m�.
	a[n-1][m-1]='-';
}
	else{
	hamle=hamle+1;
	sira=3;
	if(mode==2)
	printf("\n yanlis tahmin sira oyuncu 2'ye gecti.");
	else
	printf("\n yanlis tahmin sira bilgisayara gecti.");
}

	// 3 boyutlu haf�za dizisini okuma ad�m�.
/*	for(i=0;i<modh;i++){
	printf("\n");
		for(j=0;j<moda;j++)
			for(l=0;l<moda;l++)
			if(l==0)
			printf("\n%4d",c[i][j][l]);
			else
			printf("%4d",c[i][j][l]);
}*/
printf("\n");
	
	for(i=0;i<moda;i++)// tahtan�n i�lemlerden sonraki son hali
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
}
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX VE SIRA B�LG�SAYARA GE�ER XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
	if(mode==1){
	if(sira==2){
		ck=1;
		p=0;
printf("\n secim sirasi: bilgisayar");
	while(ck==1){
	ck=0;
	n=rand()%moda+1;
	m=rand()%moda+1;
	printf("\n%d %d",n,m);
	for(i=0;i<modh;i++){
	for(j=0;j<moda;j++)
	for(l=0;l<moda;l++)
	if((c[i][j][l]!=0)&&((n-1==j)&&(m-1==l)))
	ck=1;
	}
	if(a[n-1][m-1]=='-'){ // �nceden e�le�mi� olup tahtadan giden kartlar� a�t�rtmama ad�m�.
	ck=1;
	}}
	
	x=n;
	y=m;
	
	
	for(j=0;j<moda;j++){
	for(l=0;l<moda;l++)
	c[haf][j][l]=0;
}
	c[haf][n-1][m-1]=b[n-1][m-1];
	haf=haf+1;
	if(haf>=modh)
	haf=0;
	ck=1;
	
	for(i=0;i<moda;i++)
	for(j=0;j<moda;j++){
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);
	}
printf("\n");


	for(i=0;i<modh;i++)
	for(j=0;j<moda;j++)
	for(l=0;l<moda;l++)
	if((b[x-1][y-1]==c[i][j][l])&&((x-1!=j)&&(y-1!=l))){
	n=j+1;
	m=l+1;
	p=1;
}

	if(p==0){
while(ck==1){
	ck=0;
	n=rand()%moda+1;
	m=rand()%moda+1;
	printf("\n%d %d",n,m);
	for(i=0;i<modh;i++)
	for(j=0;j<moda;j++)
	for(l=0;l<moda;l++)
	if((c[i][j][l]!=0)&&((n-1==j)&&(m-1==l)))
	ck=1;
	if(a[n-1][m-1]=='-'){ // e�le�mi� olup tahtadan giden kartlar� a�t�rtmama ad�m�.
	ck=1;
	}}
	
	for(j=0;j<moda;j++){
	for(l=0;l<moda;l++)
	c[haf][j][l]=0;
	}

	c[haf][n-1][m-1]=b[n-1][m-1];
	haf=haf+1;
	if(haf>=modh)
	haf=0;
	}
	
	for(i=0;i<moda;i++)
	for(j=0;j<moda;j++){
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	}
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){// bilgisayar�n ilk a�t��� kart�n ikinci a��lacak kartla ayn� kart olmamas�n� kontrol etme ad�m�.
	printf("\n tebrikler dogru tahmin.");
	hamle=hamle+1;
	skorb=skorb+1;
	printf("\n bilgisayarin mevcut puani:%d",skorb);
	a[x-1][y-1]='-';
	a[n-1][m-1]='-';
}
	else{
	sira=1;
	hamle=hamle+1;
	printf("\n yanlis tahmin siraniz gecti.");
}
	// 3 boyutlu haf�za dizisini okuma
/*	for(i=0;i<modh;i++){
	printf("\n");
		for(j=0;j<moda;j++)
		for(l=0;l<moda;l++)

			if(l==0)
			printf("\n%4d",c[i][j][l]);
			else
			printf("%4d",c[i][j][l]);
}*/
printf("\n");
		for(i=0;i<moda;i++)
		for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
}}}
//****************************************************************************************************************************************************************************************
if(mode==2){
if(sira==2){
printf("\n secim sirasi: oyuncu 2");
	printf("\n Acmak istediginiz ilk kartin once satir sonra sutun numarasini girin.\n");	
	scanf("%d",&n);
	scanf("\n%d",&m);
	
	while(n>moda||m>moda){				// girilen de�erin dizinin boyutlar�n� a�mad���n� kontrol etme ad�m�.
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){// haf�za'da bulunan haf de�erindeki matristeki bilgiyi zaman� geldi�inde unutma ad�m�.
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];// haf�zaya girilen de�eri not etme ad�m�.
haf=haf+1;
if(haf>=modh)
haf=0;

x=n;
y=m;
		
	for(i=0;i<moda;i++)					// se�ilen ilk kart�n a��ld�ktan sonraki tahtan�n g�r�n�m�
	for(j=0;j<moda;j++)
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		printf("%4c",a[i][j]);

	printf("\n Acmak istediginiz ikinci kartin once satir sonra sutun numarasini girin.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
	
	while(n>moda||m>moda){
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];
haf=haf+1;
if(haf>=modh)
haf=0;

	for(i=0;i<moda;i++)	
	for(j=0;j<moda;j++)
		if(j==0){
		printf("\n");
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	}
		else
		if((i==n-1)&&(j==m-1))
		printf("%4d",b[n-1][m-1]);
		else
		if((i==x-1)&&(j==y-1))
		printf("%4d",b[x-1][y-1]);
		else
		printf("%4c",a[i][j]);
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){		//ilk a��lan kart�n ikinci a��lacak kartla ayn� kart olmamas�n� kontrol etme ad�m�.
	printf("\n tebrikler dogru tahmin.");
	hamle=hamle+1;
	skorb=skorb+1;
	printf("\n 2. oyuncunun mevcut puani:%d ",skorb);
	a[x-1][y-1]='-';	// kartlar e�le�ti�nde se�ilen konumdaki 2 kart� da '-' yapma ad�m�
	a[n-1][m-1]='-';
}
	else{
	sira=1;
	hamle=hamle+1;
	printf("\n yanlis tahmin sira oyuncu 1'e gecti.");
}

	// 3 boyutlu haf�za dizisini okuma
/*	for(i=0;i<modh;i++){
	printf("\n");
		for(j=0;j<moda;j++)
			for(l=0;l<moda;l++)
			if(l==0)
			printf("\n%4d",c[i][j][l]);
			else
			printf("%4d",c[i][j][l]);
}*/
printf("\n");

	
	for(i=0;i<moda;i++)// tahtan�n i�lemlerden sonraki son hali
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
}}}

if(sira==3)
sira=2;

// oyuncu ve bilgisayarlar�n skorlar�n�n oyunu geri �evirilemeyecek seviyeye gelip gelmedi�ini kontrol etme ad�m�.
	if(skoro>skorb)
	skor=skoro;
	else
	skor=skorb;	
	
	if(skoro+skorb==modb)
	skor=modb;
}

if(mode==2){
if(skoro>skorb)
printf("\n oyuncu 1 kazandi tebrikler.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n oyuncu 2: %d",hamle,skoro,skorb );
if(skorb>skoro)
printf("\n oyuncu 2 kazandi tebrikler.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n oyuncu 2: %d",hamle,skoro,skorb );
if(skoro==skorb)
printf("\n oyun beraberlikle sonuclandi.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n oyuncu 2: %d",hamle,skoro,skorb );
}

if(mode==1){
if(skoro>skorb)
printf("\n oyuncu 1 kazandi tebrikler.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n bilgisayar: %d",hamle,skoro,skorb );
if(skorb>skoro)
printf("\n iyi deneme ancak yeterli de�il,bilgisayar kazandi.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n bilgisayar: %d",hamle,skoro,skorb );
if(skoro==skorb)
printf("\n oyun beraberlikle sonuclandi.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n bilgisayar 2: %d",hamle,skoro,skorb );
}
return(0);
}																						// EM�R EFE KUM
																						//	20011087
