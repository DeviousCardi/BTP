#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	int a[i],b[i],c,d,e,g[i];
	scanf("%d",&c);
	scanf("%d\n",&d);
	for(i=0;i<c;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	if(c>=d) {
	    for(e=c-1;e>=c-d;e--) {
	        if(a[e+1]+b[e+d-c+1]>9)
	        g[e]=((a[e]+b[e+d-c])%10+1)%10;
	        else
	        g[e]=(a[e]+b[e+d-c])%10; }
	        for(e=c-d-1;e>=0;e--) {
	            g[e]=a[e]+(a[e+1]-a[e+1]%10)/10; }
	        for(e=0;e<c;e++) {
	            printf("%d",g[e]); } }
	else ;
	return 0; }