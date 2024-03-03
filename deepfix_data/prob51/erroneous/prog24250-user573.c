#include <stdio.h>
int main() {
    int K,N,i,j,temp;
    scanf("%d %d",&N,&K);
    int Ni[N];
    for(i=0;i<N;i++)
        scanf("%d",&Ni[i]);
    for(i=i;i<n-1;i++) {
        for(j=i;j<n;j++) {
            if(a[i]<a[j]) {
                temp=Ni[i];
                Ni[i]=Ni[j];
                Ni[j]=temp; } } }
    printf("%d",Ni[k]);
    return 0; }