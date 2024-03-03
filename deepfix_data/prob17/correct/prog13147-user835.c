#include <stdio.h>
int main() {
	int i,j,a,c,b[20],d[20],k;
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
	    scanf("%d",&b[i-1]); }
	scanf("%d",&c);
	for(j=1;j<=c;j++) {
	    scanf("%d",&d[j-1]);
	    for(k=1;k<=i;k=k+j-1) {
	        if(d[j-1]==b[k-1]) {
	            printf("YES");
	            break; }
	        else {
	            printf("NO");
	            break; } } }
	return 0; }