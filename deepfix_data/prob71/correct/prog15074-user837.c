#include <stdio.h>
int main() {
    int N,temp,i;
    int median;
    scanf("%d\n",&N);
    int a[N];
    for( i=0;i<N;i++);
    scanf("%d",&a[i]);
    for( i=0;i<N;i++) {
        for(int j=i;j<N;j++) {
            if(a[j]>a[i]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp; } } }
    if((N%2)==1) {
        median=a[N/2];
        printf("%d",median); }
    else{
        median=a[N/2-1]+a[N/2]/2.0;
        printf("%.1f",median); }
    return 0; }