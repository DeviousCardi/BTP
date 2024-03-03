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
    for(int j=0;j<N;j++) {
        printf("%d ",a[j]); }
    return 0; }