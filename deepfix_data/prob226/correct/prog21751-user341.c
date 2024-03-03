#include <stdio.h>
int main() {
    int d, N;
    scanf("%d", &d);
    scanf("%d", &N);
    int a[N+1];
    for(int i=0;i<d;i++)
        scanf("%d", &a[i]);
    for(int i=d;i<N+1;i++) {
        a[i]=0;
        for(int j=0;j<d;j++)
            a[i]+=a[i-d+j]; }
    printf("&d", &a[N]);
	return 0; }