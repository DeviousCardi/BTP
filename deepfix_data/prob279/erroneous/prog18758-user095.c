#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int i,j,rn,mn,c1=0,c2=0;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    check[0]=0;
    for(i=1;i<=n;i++) {
        c1=0;
        for(j=0;j<n;j++) {
            if(array[i]==i) {
                c1++;
                if(c1==2)
                rp=i;
                else if(c1==0)
                mn=i; } } }
    printf("%d\n%d"rp,mn);
    return 0; }