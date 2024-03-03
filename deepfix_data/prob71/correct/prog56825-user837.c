#include <stdio.h>
int main() {
    int N,temp,median,i;
    scanf("%d",&N);
    int a[N];
    for( i=0;i<N;i++);
    scanf("%d",&a[i]);
    for(int i=0;i<N-1;i++) {
        for(int j=0;j<N-1-i;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; } } }
    if((N%2)==0) {
        median=(a[N/2]+a[(N/2)-1])/2; }
    else{
        median=a[N/2]; }
    printf("%d",median);
    return 0; }