#include <stdio.h>
int main() {
    int N,K,a;
    scanf("%d %d",&N,&K);
    int ar[N];
    for(int i=0;i<N;i++)
    scanf("%d",&ar[i]);
    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            if (ar[i]<ar[j]) {
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a; } } }
    printf("%d",ar[K-1]);
    return 0; }