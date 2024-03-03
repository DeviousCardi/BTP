#include <stdio.h>
int main() {
    int a[30],b[20];
    int N,d;
    scanf("%d",&d);
    scanf("%d",&N);
    for(int i=0;i<d;i++) {
        scanf("%d",b+i); }
    for(int i=0;i<N;i++)
    {a[i]=0;}
    for(int i=0;i<N;i++) {
        if(i>=0 && i<d) {
            a[i] = b[i]; }
        if(i>=d) {
            for(int j=i-d;j<i;j++) {
                a[i]=a[i]+a[j]; } } }
    printf("%d",a[N]);
	return 0; }