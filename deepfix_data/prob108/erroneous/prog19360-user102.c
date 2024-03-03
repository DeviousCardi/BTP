#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,l,m,p,n,b,c;
	scanf("%d",&n);
	p=(n+1)/2;
	for(i=1;i<=p;i++){
	for(j=1;j<=2;j++){
	    if(j==1){
	    printf("%c",'*');}
	    b=i-1;
	    if(j==2){
	   printf("%b d",'*'); }
	printf("\n"); }
	for(l=p+1;i<=n;i++){
	for(m=1;m<=2;m++){
	    if(m==1){
	    printf("%c.0d",'*');}
	    c=i-1;
	    if(m==2){
	   printf("%c.0d",'*'); }
	printf("\n"); }
	return 0; }