#include <stdio.h>
int main() {
	int N1,N2,i,j,k,l,p=0,count;
	scanf("%d",&N1);
	int a[N1];
	for(i=0;i<N1;i++){
	    scanf("%d",&a[i]); }
	scanf("%d",&N2);
	int b[N2];
	for(j=0;j<N2;j++){
	    scanf("%d",&b[j]); }
	for(k=0;k<N2;k++){
	    count=0;
	    for(l=p+1;l<N1;l++){
	        if (b[k]==a[l]){
	        count=count+1;
	        p=p+l; } } }
	if(count!=0)
	printf("YES");
	else
	printf("NO");
	return 0; }