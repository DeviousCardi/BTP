#include <stdio.h>
int main() {
    int t,k;
    int n,i,j;
    scanf("%d/n",&n);
    int room[n];
    for(i=0;i<n;i++)
    scanf("%d ",&room[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(room[i]==room[j]) {
                t=j+2;
                k=j-i+1; }
            else
                continue; } }
    printf("%d %d",t,k);
    return 0; }