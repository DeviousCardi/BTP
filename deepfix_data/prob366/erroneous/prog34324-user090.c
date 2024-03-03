#include <stdio.h>
int main(){
    int N,k=N+1,i,j,x[200];
    scanf("%d",&N);
    int D[200];
    for(i=0;i<2*N;i++) {
        scanf("%d",D[i]); }
    for(i=0;i<2*N-1;i++) {
        for(j=i+1;j<2*N;j++) {
            if(a[i]==a[j])
            x[i]=j-i ; } }
    for(i=0;i<N;i++) {
        if(x[i]<k)
         { k=x[i];
          min=x[i];} }
    printf("%d",min);
    return 0; }