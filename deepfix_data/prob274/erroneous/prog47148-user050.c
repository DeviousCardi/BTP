#include <stdio.h>
int main(){
    int n,x,t=0,k=0;
    scanf("%d ",&n);
    int N[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&x);
        N[i]=x; }
    int N1[n];
    for(int i=0;i<n;i++) {
        N1[i]=N[i];
        t=t+1;
        for(int j=0,j<(i);j++) {
            if(N1[i]==N1[j]) {
                k=k+t; } } }
    printf("%d %d",t,k)
    return 0; }