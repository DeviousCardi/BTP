#include <stdio.h>
int main() {
    int d,n,i,j,a[30],b[20];
    scanf("%d %d",&d,&n);
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    if(n<d)
        printf("%d",a[n]);
    else {
        for(j=d;j<=n;j++) {
            for(i=j-d,a[j]=0;i<j;i++) {
                a[j]=a[j]+a[i]; } }
        printf("%d",a[n]); }
	return 0; }