#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
int main() {
    int i,j,k,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            for(k=0;k<=n;k++) {
                if(((5*i)+(3*j)+k)==n)
                count++; } } }
    printf("%d ",count);
    return 0; }