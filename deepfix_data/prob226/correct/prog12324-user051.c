#include <stdio.h>
int main() {
    int d,N,b[20],a[30],i,j;
    scanf("%d %d",&d,&N);
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    if(N<d)
        a[N]=b[N];
    else {
        for(i=d;i<=N;i++) {
            for(j=i-d,a[i]=0;j<i;j++) {
                a[i]=a[i]+b[j+d-1]; } } }
    printf("%d",a[N]);
	return 0; }