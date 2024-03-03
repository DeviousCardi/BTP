#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int i,j,rn,mn,c1=0;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    for(i=1;i<=n;i++) {
        c1=0;
        for(j=0;j<n;j++) {
            if(array[j]==i) {
                c1++; } }
        if(c1==2)
        rn=i;
        else if(c1==0)
        mn=i; }
    printf("%d\n%d",rn,mn);
    return 0; }