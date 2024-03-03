#include <stdio.h>
int main() {
int d,n,i,a[n+1],b[d];
scanf("%d %d\n",&d,&n);
for(i=0;i<d;i++){
    scanf("%d ",&b[i]); }
for(i=1;i<d;i++){
    a[n]=b[n-i]; }
printf("%d",a[n])  ;
	return 0; }