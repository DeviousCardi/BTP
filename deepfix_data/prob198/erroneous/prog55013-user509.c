#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i;
    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++) {
        scanf("%d",&a[i]); }
	scanf("%d",b);
	int t[b];
	for(i=0;i<b;i++) {
	    scanf("%d",&t[i]); }
	for(j=0;j<a;j++) {
	    for(k=0;k<b;k++) {
	        if(a[k]>a[j])&&a[k]!=a[j])
	        printf("%d",a[j]);
	        return 0; } }
	if(j==a) printf("NO");
	return 0; }