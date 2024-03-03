#include <stdio.h>
int main() {
    int i,d,N,j;
    int sum=0;
    scanf("%d %d\n",&d,&N);
    int b[d];
    int a[N+1];
    for(i=0;i<d;i++) {
        scanf("%d",&b[i]); }
    for (i=0;i<d;i++) {
        a[i]=b[i]; }
    if (N>=d) {
        for (i=d;i<=N+1;i++) {
            for (j=0;j<i;j++) {
                sum=sum+a[j];
                printf("%d\n",sum); }
            a[i]=sum;printf("%d\n",a[i]); } }
    else {
        printf("%d",&a[N]); }
	return 0; }