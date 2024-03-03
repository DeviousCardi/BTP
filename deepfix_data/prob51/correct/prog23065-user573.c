#include <stdio.h>
int main() {
    int K,N,i,j,temp;
    scanf("%d %d",&N,&K);
    int Ni[N];
    for(i=0;i<N;i++)
        scanf("%d",&Ni[i]);
    for(i=i;i<N-1;i++) {
        for(j=i;j<N;j++) {
            if(Ni[i]<Ni[j]) {
                temp=Ni[i];
                Ni[i]=Ni[j];
                Ni[j]=temp; } } }
    printf("%d",Ni[K-1]);
    return 0; }