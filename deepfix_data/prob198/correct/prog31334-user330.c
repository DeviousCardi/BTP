#include <stdio.h>
#include <stdlib.h>
int min(int a,int b){
    if(a<b)return a;
    else return b; }
int main() {
	int n1,n2,i,j,d=0,k=0;
	scanf("%d\n",&n1);
	int a[n1];
	for(i=0;i<=n1-1;i++){
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&n2);
	int b[n2];
	for(i=0;i<=n2-1;i++){
	    scanf("%d\n",&b[i]); }
	int c[20];
	for(i=0;i<=n1-1;i++){
	    for(j=0;j<=n2-1;j++){
	        k=0;
	        if(a[i]==b[j]){
	            k++;break; } }
	    if(k==0){
	        c[d]=a[i];
	        d++; } }
	if(k==0)printf("NO");
	 j=c[0];
	for(i=1;i<=k-1;i++){
	   j=min(j,c[i]); }
	printf("%d",j);
	return 0; }