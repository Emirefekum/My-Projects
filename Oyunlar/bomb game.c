#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10

int main(){
	int board[SIZE][SIZE]={0};
	int i,j,x,y;
	int skor=0;

printf("\n rastgele dizilmis bir tahtada,\n en alt satirda rastgele yerlestirilmis bir bomba patladigi satir ve sutunlari yok eder.\n yok ettigi degerler kadar skor alir ve taslar asagi duser.");
srand(time(NULL));
	
for(i=0;i<SIZE;i++)
for(j=0;j<SIZE;j++)
board[i][j]=rand()%9+1;

i--;
j=rand()%SIZE;
board[i][j]=(rand()%(SIZE-1)+1)*-1;
x=i;
y=j;
printf("\n\n  tahtanin ilk hali");
for(i=0;i<SIZE;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf(" %2d",board[i][j]);
}

//BURADAN SONRA BOMBA PATLIYOR
i=1;
while(board[x][y]<0){
if(y-i>=0)//ÝF'LER YANLARA DA PATLATIYOR
skor+=board[x][y-i],
board[x][y-i]=0;
if(y+i<SIZE)
skor+=board[x][y+i],
board[x][y+i]=0;
skor+=board[x-i][y];
board[x-i][y]=0;
board[x][y]++;//ayný zamanda bombayý da sýfýrlýyor
i++;
}

printf("\n\n  tahtanin orta hali");
for(i=0;i<SIZE;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf(" %2d",board[i][j]);
}
//BURADAN SONRA TAÞLAR AÞAÐI DÜÞÜYOR

i=0;
j=0;
while(i<SIZE){
if(board[x-i][y]!=0){
board[x-j][y]=board[x-i][y];
board[x-i][y]=0;
j++;
}
i++;
}
//BURASI YANLARA PATLAYANLARI AÞAÐI DÜÞÜRÜYOR
for(j=0;j<SIZE;j++)
if(board[x][j]==0){
for(i=0;i<SIZE-1;i++)
board[x-i][j]=board[x-i-1][j];
board[0][j]=0;
}

printf("\n\n  tahtanin son hali");
for(i=0;i<SIZE;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf(" %2d",board[i][j]);
}
printf("\n skor = %d",skor);
return(0);
}
