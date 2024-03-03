#include <stdio.h>
int main() {
    int N,K,t;
    scanf("%d %d",&N,&K);
    int ar[N];
    for(int i=0;i<N;i++)
    scanf("%d",&ar[i]);
    for(int c=0;c<N-1;c++){
        for(int d=0;d<N-c-1;d++){
            if(ar[d]<ar[d+1]){
                t=ar[d];
                ar[d]=ar[d+1];
                ar[d+1]=t; } } }
    printf("%d",ar[K]);
    return 0; }