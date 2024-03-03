#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int k=(n+1)/2;
	int y=k+1;int x;
	int i;
	int p;
	int t;
	for(i=1;i<=k;i=i+1){
	    int s=k-i;
	    for(t=1;t<=s;t=t+1){
	        printf(" "); }
	    for(p=1;p<=i;p=p+1){
	        printf("%c",'*'); }
	    printf("\n"); }
	for(x=y;x<=n;x=x+1){
	    int s=k-x;
	    for(t=1;t<=s;t=t+1){
	        printf(" "); }
	    for(i=1;i<=2*k-n;i=i+1){
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }