#include <stdio.h>
int main() {
    int n,d;
    int a[30];
    scanf("%d %d\n",&d,&n);
    for(int i=0;i<d;i++) {
        scanf("%d ",&b[i]);
        a[i]=b[i]; }
    for(int i=d;i<=n;i++) {
    a[i]=0;
    for(int j=0;j<i;j++) {
     a[i]=a[i]+a[j]; } }
    printf("%d",a[n]);
	return 0; }