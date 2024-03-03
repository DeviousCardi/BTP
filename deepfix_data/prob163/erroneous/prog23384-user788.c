#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,k,i,j,f,;
	scanf("%d\n",&n);
	scanf("%d\n",&k);
	char a[501],b[501],c[501];
	for(i=0;i<n;i++){
	    scanf("%c",&a[i]); }
for(j=0;j<k;j++){
    scanf("%c",&b[j]); }
for(f=fmax(n,k);f>=0;f--){
    if(a[n-f]-b[k-f]<5){
    c[f]=a[n-f]+b[k-f]-'0'; }
    else{
        c[f]=a[n-f]+b[k-f]-'0'+1; } }
    printf("%c",c[f]); }
	return 0; }