#include <stdio.h>
int main() {
int a[2000];
int i,d,n;
scanf("%d%d",&d,&n);
for(i=0;i<d;i++) {
        scanf("%d",&a[i]); }
int j=1;
while(j<=d) {
        a[i]=a[i-j]; }
	return 0; }