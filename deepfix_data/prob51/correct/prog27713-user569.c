#include <stdio.h>
#define MAX 1000
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int chair[n];
    int i,j,min=0;
    int max=0;
    int add;
    for(i=0;i<n;i++) {
        scanf("%d",&chair[i]); }
    for(j=0;j<(k-1);j++) {
        max = 0;
        for(i=0;i<n;i++) {
            if(max<chair[i]) {
                max = chair[i];
                add=i; } }
        chair[add]=-1; }
    max = 0;
    for(i=0;i<n;i++) {
        if(max<chair[i]) max=chair[i]; }
    printf("%d",max);
    return 0; }