#include <stdio.h>
int main() {
	int i,j,a,c,b[20],d[20];
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
	    scanf("%d",b); }
	scanf("%d",&c);
	for(j=1;j<=c;j++) {
	    scanf("%d",d);
	    if(d[j-1]==b[i]) {
	        printf("YES"); }
	    else {
	        printf("NO");
	        break; } }
	return 0; }