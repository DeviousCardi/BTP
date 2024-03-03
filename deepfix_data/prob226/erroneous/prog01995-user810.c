#include <stdio.h>
int main() {
int d,n,a[2000],b[2000],i,j;
scanf("%d %d",&d,&n);
for(i=0;i<d;i++) {
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    for(i=d;i<=30;i++) {
            a[i]=0; }
    for(i=d;i<=30;i++) {
            for(j=1;j<=d;j++) {
                      a[i]=a[i]+a[i-j]; } }
    printf("%d",a[n]);
    return 0; }
	return 0; }