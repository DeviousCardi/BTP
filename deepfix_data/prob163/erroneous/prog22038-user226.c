#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	char a[n1],b[n2];
	scanf("%s%s",a,b);
	int max(int,int);
	for(i=0;i<max(n1,n2);i++) {
	    if(i<min(n1,n2)) {
	        c=a[n1-i-1]+b[n2-i-1]-2*('1'-1);
	        out[i]=c%10+c1;
	        c1=c/10; }
	    else {
	        if(n1<n2) {
	            c=b[n2];
	            out[i]=c%10+c1;
	            c1=c/10; }
	        if(n2<n1) {
	            c=a[n1]
	            out[i]=c%10+c1;
	            c1=c/10; } }
	    printf("%d",out[i]); }
	return 0; }