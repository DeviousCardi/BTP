#include <stdio.h>
int main() {
	int N1,N2,i,j,k,l,count;
	scanf("%d",&N1);
	int a[N1];
	for(i=0;i<N1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&N2);
	int b[N2];
	for(j=0;j<N2;j++){
	    scanf("%d",&b[j]); }
	for(k=0;k<N1;k++){
	    count=0;
	    for(l=0;l<N2;l++){
	        if (b[k]==a[l])
	        count=count+1; } }
	if(count!=0)
	printf("YES");
	else
	printf("NO");
	return 0; }