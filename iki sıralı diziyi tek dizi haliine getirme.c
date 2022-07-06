#include<stdio.h>

	int main(){
		int a[50]={0};
		int b[50]={0};
		int t[100];
		int temp,i,j,m,n;
		
		printf("ilk dizinin eleman sayisini giriniz.\n");
		scanf("%d",&m);
		for(i=0;i<m;i++)
		printf("birinci dizinin %d. elemanini giriniz.\n",i+1),
		scanf("%d",&a[i]);
		
		printf("ikinci dizinin eleman sayisini giriniz.\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		printf("ikinci dizinin %d. elemanini giriniz.\n",i+1),
		scanf("%d",&b[i]);
		
		printf("\n");
		for(i=0;i<m;i++)
		printf(" %d",a[i]);
		printf("\n");
		for(i=0;i<n;i++)
		printf(" %d",b[i]);
		printf("\n");
		
		
i=0;
while(i<m){
	
	j=0;
	while(j<n){
		if(a[i]>b[n-1-j])
		temp=a[i],
		a[i]=b[n-1-j],
		b[n-1-j]=temp;
		j=j+1;
	}
i=i+1;
}
	
	printf("\n");
	for(i=0;i<m;i++)
	printf(" %d",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf(" %d",b[i]);
	printf("\n");
	
	
	for(i=0;i<m;i++)
	t[i]=a[i];
	for(i=m;i<m+n;i++)
	t[i]=b[i-m];
	
	printf("\n");
	for(i=0;i<m+n;i++)
	printf("  %d",t[i]);

return(0);
}
