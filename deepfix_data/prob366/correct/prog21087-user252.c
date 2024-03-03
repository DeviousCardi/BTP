#include <stdio.h>
int main() {
    int n,ex[200],i,j;
    scanf("%d\n",&n);
    int mn=2*n;
    for(i=0;i<2*n;i++) {
        scanf("%d ",&ex[i]);
        j=i-1;
        while(j>=0) {
            if(ex[i]==ex[j]) {
                if((i-j)<mn) { mn=i-j; break; } }
            j--; } }
    printf("%d\n",mn);
    return 0; }