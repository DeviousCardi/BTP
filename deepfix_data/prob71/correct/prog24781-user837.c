#include <stdio.h>
int main() {
    int N,temp,i,j,a[100000];
    float median;
    scanf("%d\n",&N);
    for( i=0;i<N;i++);
    scanf("%d",&a[i]);
    for( i=0;i<N;i++) {
        for( j=i;j<N;j++) {
            if(a[j]>a[i]) {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp; } } }
    if((N%2)==0) {
        median=(a[(N/2)-1]+a[N/2])/2.0;
        printf("%.1f",median); }
    else {
         printf("%d",a[N/2]); }
    return 0; }