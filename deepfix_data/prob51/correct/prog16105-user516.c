#include <stdio.h>
int main() {
    int N,K,t;
    scanf("%d%d",&N,&K);
    int a[N];
    for(int i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            if(a[j+1]<a[j]){
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t; } } }
    printf("%d",a[N-K]);
    return 0; }