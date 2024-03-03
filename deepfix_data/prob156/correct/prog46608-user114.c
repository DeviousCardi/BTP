#include <stdio.h>
int main() {
    int n,m,S=0;
    scanf("%d%d",&n,&m);
    int k=m*n;
    int s[k];
    for(int i=0; i<k; i++) {
        scanf("%d",&s[i]); }
    for(int i=0; i<n; i++) {
        int sum=0;
       for(int j=m*i ; j<(m+1)*i; j++) {
           sum=sum+s[j]; }
       S= (sum>S)?sum:S; }
    printf("%d",S);
    return 0; }