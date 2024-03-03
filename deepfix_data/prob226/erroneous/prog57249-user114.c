#include <stdio.h>
int main() {
    int d,n,sum ;
    scanf("%d%d",&d,&n);
    int b[d],a[31];
    for(int i=0; i<d; i++) {
        scanf("%d",&b[i]);
        a[i]=b[i]; }
    for(int i=d;i<=n;i++)
    { sum=0;
        for( int j=1;j<=d; j++) {
            sum =sum+a[i-j]; }
        a[i]=sum; }
    printf("%d",a[n];)
	return 0; }