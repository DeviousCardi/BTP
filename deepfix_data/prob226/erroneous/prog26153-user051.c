#include <stdio.h>
int main() {
    int d,N,b[20],a[30];
    scanf("%d %d",&d,&N);
    for(i=0;i<d;i++)
        scanf("%d",&b[i]);
    if(N<d)
        a[N]=b[N];
    else {
        for(i=d-1,a[N]=0;i>=0;i--) {
            a[N]=a[N]+b[i]; } }
    printf("%d",a[N]);
	return 0; }