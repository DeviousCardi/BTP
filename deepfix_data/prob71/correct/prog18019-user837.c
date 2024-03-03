#include <stdio.h>
int main() {
    int N,temp,i;
    float median;
    scanf("%d\n",&N);
    int a[N];
    for( i=0;i<N;i++);
    scanf("%d",&a[i]);
    for( i=0;i<N;i++) {
        for(int j=i;j<N-1;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
    if((N%2)==1) {
        median=a[N/2]; }
    else{
        median=a[N/2-1]+a[N/2]/2.0; }
    printf("%d",median);
    return 0; }