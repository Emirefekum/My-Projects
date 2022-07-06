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
		
	if(mod==1){//kolay mod deðiþken deðerleri
		modh=2;
		moda=4;
		modb=8;
		modc=72;
}
	if(mod==2){//orta mýod deðiþken deðerleri
		modh=6;
		moda=6;
		modb=18;
		modc=342;
}
	if(mod==3){//zor mod deðiþken deðerleri
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
	//BURAYA KADAR TAHTADAKÝ SAYILARIN TOPLAMI 72 OLANA KADAR DÖNÜYOR.
	
	for(i=0;i<moda;i++)//           OYUN TAHTASININ AÇIK HALÝ(SAYILAR)
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4d",b[i][j]);
		else
		printf("%4d",b[i][j]);
	}
	printf("\n");
	
	for(i=0;i<moda;i++)//			OYUN TAHTAASININ KAPALI HALÝ(*)
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
	}
	
						//BURAYA KADAR AXA OYUN TAHTASINI 1'DEN A^2/2'YE KADAR OLAN SAYILARI 2'ÞER KEZ TEKRAR EDEREK RASTGELE DÜZENDE HAZIRLAMASI GEREKÝYOR.

		while(skor<(modb/2)+1){
		
		if(sira==1){
printf("\n secim sirasi: oyuncu 1");
	printf("\n Acmak istediginiz ilk kartin once satir sonra sutun numarasini girin.\n");	
	scanf("%d",&n);
	scanf("\n%d",&m);
	
	while(n>moda||m>moda){				// girilen deðerin dizinin boyutlarýný aþmadýðýný kontrol etme adýmý.
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){// hafýza'da bulunan haf deðerine sahip matristeki bilgiyi zamaný geldiðinde unutma adýmý.
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];// hafýzaya girilen deðeri not etme adýmý.
haf=haf+1;
if(haf>=modh)
haf=0;

x=n;
y=m;
		
	for(i=0;i<moda;i++)				// seçilen ilk kartýn açýldýktan sonraki tahtanýn görünümü
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
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){		//ilk açýlan kartýn ikinci açýlacak kartla ayný kart olmamasýný kontrol etme adýmý.
	printf("\n tebrikler dogru tahmin.");
	hamle=hamle+1;
	skoro=skoro+1;
	printf("\n oyuncu 1'in mevcut puani:%d ",skoro);
	a[x-1][y-1]='-';	// kartlar eþleþtiðnde seçilen konumdaki 2 kartý da boþluk '-' adýmý.
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

	// 3 boyutlu hafýza dizisini okuma adýmý.
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
	
	for(i=0;i<moda;i++)// tahtanýn iþlemlerden sonraki son hali
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
}
}
//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX VE SIRA BÝLGÝSAYARA GEÇER XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
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
	if(a[n-1][m-1]=='-'){ // önceden eþleþmiþ olup tahtadan giden kartlarý açtýrtmama adýmý.
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
	if(a[n-1][m-1]=='-'){ // eþleþmiþ olup tahtadan giden kartlarý açtýrtmama adýmý.
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
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){// bilgisayarýn ilk açtýðý kartýn ikinci açýlacak kartla ayný kart olmamasýný kontrol etme adýmý.
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
	// 3 boyutlu hafýza dizisini okuma
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
	
	while(n>moda||m>moda){				// girilen deðerin dizinin boyutlarýný aþmadýðýný kontrol etme adýmý.
	printf(" yanlis aralik girdiniz.\n tekrar gcerli bir aralik giriniz.\n");
	scanf("%d",&n);
	scanf("\n%d",&m);
}

for(j=0;j<moda;j++){// hafýza'da bulunan haf deðerindeki matristeki bilgiyi zamaný geldiðinde unutma adýmý.
for(l=0;l<moda;l++)
c[haf][j][l]=0;
}
c[haf][n-1][m-1]=b[n-1][m-1];// hafýzaya girilen deðeri not etme adýmý.
haf=haf+1;
if(haf>=modh)
haf=0;

x=n;
y=m;
		
	for(i=0;i<moda;i++)					// seçilen ilk kartýn açýldýktan sonraki tahtanýn görünümü
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
	
	if((b[x-1][y-1]==b[n-1][m-1])&&((x!=n)||(y!=m))){		//ilk açýlan kartýn ikinci açýlacak kartla ayný kart olmamasýný kontrol etme adýmý.
	printf("\n tebrikler dogru tahmin.");
	hamle=hamle+1;
	skorb=skorb+1;
	printf("\n 2. oyuncunun mevcut puani:%d ",skorb);
	a[x-1][y-1]='-';	// kartlar eþleþtiðnde seçilen konumdaki 2 kartý da '-' yapma adýmý
	a[n-1][m-1]='-';
}
	else{
	sira=1;
	hamle=hamle+1;
	printf("\n yanlis tahmin sira oyuncu 1'e gecti.");
}

	// 3 boyutlu hafýza dizisini okuma
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

	
	for(i=0;i<moda;i++)// tahtanýn iþlemlerden sonraki son hali
	for(j=0;j<moda;j++){
		if(j==0)
		printf("\n%4c",a[i][j]);
		else
		printf("%4c",a[i][j]);
}}}

if(sira==3)
sira=2;

// oyuncu ve bilgisayarlarýn skorlarýnýn oyunu geri çevirilemeyecek seviyeye gelip gelmediðini kontrol etme adýmý.
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
printf("\n iyi deneme ancak yeterli deðil,bilgisayar kazandi.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n bilgisayar: %d",hamle,skoro,skorb );
if(skoro==skorb)
printf("\n oyun beraberlikle sonuclandi.\n hamle sayisi: %d\n puan durumu:\n oyuncu 1: %d \n bilgisayar 2: %d",hamle,skoro,skorb );
}
return(0);
}																						// EMÝR EFE KUM
																						//	20011087
