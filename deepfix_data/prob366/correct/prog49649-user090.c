#include <stdio.h>
int main(){
    int N,k=2*N,i,j,x[200],min;
    scanf("%d",&N);
    int D[200];
    for(i=0;i<2*N;i++) {
        scanf("%d",&D[i]); }
    for(i=0;i<N;i++) {
        for(j=i+1;j<2*N;j++) {
            if(D[i]==D[j])
            x[i]=j-i ; } }
    printf("%d",x[N-1]); }