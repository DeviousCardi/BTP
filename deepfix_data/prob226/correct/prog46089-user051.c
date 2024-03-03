#include <stdio.h>
int main() {
    int d,N,b[20],a[30],i,j;
    scanf("%d %d",&d,&N);
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    if(N<d)
        a[N]=b[N];
    else {
        for(i=d,a[d]=0;i<N;i++) {
            for(j=i-1;j>=i-d;j--)
                a[i]=a[i]+b[j]; } }
    for(i=N-1,a[N]=0;i>=i-d;i--)
        a[N]=a[N]+a[i];
    printf("%d",a[N]);
    printf("%d",a[N]);
	return 0; }