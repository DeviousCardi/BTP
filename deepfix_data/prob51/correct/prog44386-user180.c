#include <stdio.h>
int main() {
   int n,k,N[100000];
   scanf("%d %d\n",&n,&k);
   for(int i=0;i<n;i++)
    scanf("%d",&N[i]);
    for(int i=0;i<n;i++){
        for(int c=1;c<=n-i-1;c++){
            int tmp=N[i];
            if(N[c]>=N[i]) {
                N[i]=N[c];
                N[c]=tmp; } } }
    for(int m=0;m<n;m++)
        printf("%d ",N[m]);
    return 0; }