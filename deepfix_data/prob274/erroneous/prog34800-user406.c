#include <stdio.h>
int main() {
    int t,k;
    int n,i;
    int room[n];
    scanf("%d/n",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&room[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(room[i]==room[j]) {
                t=j;
                k=j-i;
                break; }
            else
                continue; } }
    printf("%d %d",t,k);
    return 0; }