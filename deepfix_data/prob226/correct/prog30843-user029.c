#include <stdio.h>
int main() {
    int d,n,a[30],b[40];
    scanf("%d%d",&d,&n);
    for(int i=0;i<d;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<d;i++)
    a[i]=b[i];
    for(int i=d;i<n;i++) {
    for(int c=0;c<i;c++) {
        a[i]=a[i]+a[c]; } }
    printf("%d",a[n]);
	return 0; }