#include <stdio.h>
#define MIN 100000
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int chair[n];
    int i,j,min=0;
    int add;
    for(i=0;i<n;i++) {
        scanf("%d",&chair[i]); }
    for(j=0;j<k;j++) {
        min = MIN;
        for(i=0;i<n;i++) {
            if(min>chair[i]) {
                min = chair[i];
                add=i; } }
        chair[add]=-1; }
    int max=0;
    for(i=0;i<n;i++) {
        if(max<chair[i]) max=chair[i]; }
    printf("%d",max);
    return 0; }