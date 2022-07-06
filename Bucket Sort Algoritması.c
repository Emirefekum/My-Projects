#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main () {// min = 0 olmadýðý takdirde doðru çalýþmýyor
    int buckets[SIZE][SIZE],arr[SIZE];
    int i,j,k;
	int mod,max,min;
	int depth,depth_top=0,depth_bottom=0;
	int range=0,temp=0;
	
	srand(time(NULL));

printf("calistirmak istediginiz modu giriniz. \nmod1 = kullanici girdili dizi.\nmod2 = rastgele olusturulmus dizi.\n");
scanf("%d", &mod);

if(mod==1){
for(i=0; i<SIZE; i++){
    printf("\narr[%d] = ",i);
	scanf("%d", &arr[i]);
	}}
    
if(mod==2) {
for(i=0; i<SIZE; i++){
arr[i]=rand()%100;
}}
    
for(i=0; i<SIZE; i++)
    printf("%4d", arr[i]);
printf("\n\n\n\n");
    
max = arr[0];
min = arr[0];

for(i=0; i<SIZE; i++){
    if (arr[i]>max){
    max = arr[i];
	}
	if (arr[i]<min){
    min = arr[i];
    }}

printf("\nmax=%d, min=%d\n", max, min);
range = ((max-min)/SIZE)+1;
printf("\nnumber of buckets=%d\n", range);
    
for(i=0; i<SIZE; i++){
for(j=0; j<SIZE; j++){
    buckets[i][j]=-1;
	}}
	
depth=((max-min)/range)+1;
depth_top=depth;
depth_bottom=0;
    for(i=0; i<SIZE; i++){
        k=0;
    for (j=0; j<SIZE; j++) {
    if ((depth_bottom <= arr[j])&&(arr[j] < depth_top)){
    buckets[i][k]=arr[j];
    k++;
	}}
depth_bottom=depth_top;
depth_top=depth_top+depth;
}
printf("\n");
//KONTROL ÝÇÝN DENEME
/*
    for(i=0; i<range; i++) {
        printf("\n");
        for(j=0; j<SIZE; j++) {
            printf("%4d",buckets[i][j]);
       }
    }
*/
printf("\n\n\n\n");
    
for(i=0; i<range; i++){
for(k=0; k<SIZE/2; k++){
for(j=0; j<SIZE; j++){
    if ( buckets[i][j] > buckets[i][j+1] && (buckets[i][j+1] != -1)){
        temp = buckets[i][j];
        buckets[i][j] = buckets [i][j+1];
        buckets [i][j+1] = temp;
}}}}

k=0;
for(i=0; i<range; i++){
for(j=0; j<SIZE; j++){
	if(buckets[i][j] != -1 ){
    arr[k]=buckets[i][j];
    k++;
}}}
    
for(i=0; i<range; i++){
    printf("\n bucket%d=",i+1);
for(j=0; j<SIZE; j++){
    if (buckets[i][j] != -1)
    printf("%4d",buckets[i][j]);
}}

    printf("\n\n\n");
    printf("your sorted array:");
for(i=0; i<SIZE; i++){
    printf("%3d",arr[i]);
}
return(0);
}
