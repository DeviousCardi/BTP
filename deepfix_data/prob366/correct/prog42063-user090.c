#include <stdio.h>
int main(){
    int N,k=N+1,i,j,x[200],min;
    scanf("%d",&N);
    int D[200];
    for(i=0;i<2*N;i++) {
        scanf("%d",&D[i]); }
    for(i=0;i<2*N-1;i++) {
        for(j=i+1;j<2*N;j++) {
            if(D[i]==D[j])
            x[i]=j-i ;
        } printf("%d ",x[i]); }
    for(i=0;i<2*N-1;i++) {
        if(x[i]<k&&x[i]!=0)
         { k=x[i];
          min=k;} }
    printf("%d",min);
    return 0; }