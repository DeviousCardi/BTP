#include <stdio.h>
int main() {
   int n,k,N[100000];
   scanf("%d %d\n",&n,&k);
   for(int i=0;i<n;i++)
    scanf("%d",&N[i]);
    for(int i=0;i<n;i++){
        for(int c=1;c<=n-i-1;c++){
            int tmp=N[c-1];
            if(N[c]>=N[c-1]) {
                N[c-1]=N[c];
                N[c]=tmp; } } }
    printf("%d",N[k-1]);
    return 0; }