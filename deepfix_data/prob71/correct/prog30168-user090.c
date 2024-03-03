#include <stdio.h>
int main() {
    int N,i,max=0,pos=0 ;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<N;i++) {
       if(a[i]>max) {
            max=a[i];
            pos=i ;
             printf("%d ",max); } }
    return 0; }