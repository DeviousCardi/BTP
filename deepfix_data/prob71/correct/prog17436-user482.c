#include <stdio.h>
int main() {
    int N=0;
    scanf("%d",&N);
    int a[N];
        for(int i=0;i<N;i++) {
            scanf("%d",&a[i]); }
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++) {
            if(a[i]>a[j]) {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp; } } }
    if((N%2)==0) {
        float x=(a[(N/2)-1]+a[N/2])/2.0;
        printf("%.1f",x); }
    else {
        int x=a[(N-1)/2];
        printf("%d",x); }
    return 0; }