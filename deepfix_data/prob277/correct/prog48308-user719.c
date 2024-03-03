#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,m,p,d,q,w;
	scanf("%d",&n);
	char star,space;
	star = '*';
	space = ' ';
	d = (n+1)/2;
	for(i=1;i<=d;i++){
	for(m=0;m<i-1;m++){
	printf("%c",space); }
	for(j=i;j<=n-i+1;j++){
	printf("%c",star); }
	printf("\n"); }
	for(p=1;p<=(n-1)/2;p++){
	for(q=(n-1)/2;q>p;q--){
	printf("%c",space); }
	for(w=1;w<=2*p-1;w++){
	printf("%c",star); }
	printf("\n"); }
	return 0; }