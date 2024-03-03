#include <stdio.h>
int main() {
    int i,j,n,d,a[30];
    scanf("%d%d",&d,&n);
    for(i=0;i<d;i++)
        scanf("%d",&a[i]);
    for(i=d;i<=30;i++)
        a[i]=0;
    for(i=d;i<=30;i++) {
            for(j=1;j<=d;j++)
                a[i]=a[i]+a[i-j]; }
    printf("%d",a[n]);
	return 0; }