#include <stdio.h>
int main() {
    int n,d;
    int a[30];
    scanf("%d %d\n",&n,&d);
    for(int i=0;i<d;i++)
    scanf("%d ",&a[i]);
    for(int i=d;i<=n;i++) {
    a[i]=0;
        for(int j=0;j<d;j++) {
            a[i]=a[i]+a[j]; } }
    printf("%d",a[n]);
	return 0; }