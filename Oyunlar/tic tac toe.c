#include<stdio.h>
#define SIZE 3
	//79=O
	//88=X
	
void tahtayaz(char board[SIZE][SIZE], int i, int j){
for(i=0;i<SIZE;i++){
printf("\n");
for(j=0;j<SIZE;j++)
printf("%4c",board[i][j]);
}}



void yataykontrol(char board[SIZE][SIZE], int i, int j, int win1, int win2, int kont){
for(i=0;i<SIZE;i++){
for(j=0;j<SIZE;j++){
if(board[i][j]==88)
win1++;
if(board[i][j]==79)
win2++;
}
if(win1==3)
printf("\noyuncu 1 kazandi"),
win1=0,
kont=-1;
else
win1=0;
if(win2==3)
printf("\noyuncu 2 kazandi"),
win2=0,
kont=-1;
else
win2=0;
}}



void dikeykontrol(char board[SIZE][SIZE], int i, int j, int win1, int win2, int kont){
for(i=0;i<SIZE;i++){
for(j=0;j<SIZE;j++){
if(board[j][i]==88)
win1++;
if(board[j][i]==79)
win2++;
}
if(win1==3)
printf("\noyuncu 1 kazandi"),
win1=0,
kont=-1;
else
win1=0;
if(win2==3)
printf("\noyuncu 2 kazandi"),
win2=0,
kont=-1;
else
win2=0;
}}

	
	
void caprazkontrol(char board[SIZE][SIZE], int i, int j, int win1, int win2, int kont){
for(i=0;i<SIZE;i++){
for(j=0;j<SIZE;j++){
if(board[i][j]==88 && i==j)
win1++;
if(board[i][j]==79 && i==j)
win2++;
}}
if(win1==3)
printf("\noyuncu 1 kazandi"),
win1=0,
kont=-1;
else
win1=0;
if(win2==3)
printf("\noyuncu 2 kazandi"),
win2=0,
kont=-1;
else
win2=0;
	
for(i=0;i<SIZE;i++){
for(j=0;j<SIZE;j++){
if(board[i][j]==88 && i+j==2)
win1++;
if(board[i][j]==79 && i+j==2)
win2++;
}}	
if(win1==3)
printf("\noyuncu 1 kazandi"),
win1=0,
kont=-1;
else
win1=0;
if(win2==3)
printf("\noyuncu 2 kazandi"),
win2=0,

kont=-1;
else
win2=0;
}


int main(){
	char board[SIZE][SIZE]={45,45,45,45,45,45,45,45,45};
	int i,j,k;
	int win1=0,win2=0;
	int kont=9,oyuncu=1,sira=88;

tahtayaz(board,i,j);

while(kont>0){
printf("\n oyuncu %d %c koymak istediginiz koordinatlari giriniz.\n",oyuncu,sira);
scanf("%d",&i);
scanf("%d",&j);
board[i-1][j-1]=sira;
if(oyuncu==1)
oyuncu=2,
sira=79;
else
oyuncu=1,
sira=88;
kont--;

tahtayaz(board,i,j);
yataykontrol(board,i,j,win1,win2,kont);
dikeykontrol(board,i,j,win1,win2,kont);
caprazkontrol(board,i,j,win1,win2,kont);
printf("\n%d\n",kont);// fonksiyonlarýn içinde kont deðiþmiyor, neden?
}
	
return(0);
}
