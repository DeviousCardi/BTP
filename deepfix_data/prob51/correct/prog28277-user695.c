#include <stdio.h>
int main() {
   int N,K,arr[100000];
   scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]); }
    for(int i=0;i<N;i++) {
        printf("%d",arr[i]); }
    return 0; }