#include <stdio.h>
int main() {
    int d,n,i,j,s;
    scanf("%d %d",&d,&n);
    int b[d];
    int a[n];
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    if(n<d)
        printf("%d",b[n]);
    else {
        for(i=0;i<d;i++)
            a[i]=b[i];
        for(i=d;i<=n;i++) {
            for(j=i-1,s=0;j>=i-d;j--) {
                s=s+a[j]; }
            a[i]=s; }
        printf("%d",a[n]); }
	return 0; }