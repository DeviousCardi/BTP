#include <stdio.h>
#include <stdlib.h>
int tow(int k) {
    if(k==0)
    return 0;
    if(k==1)
    return 1;
    return tow(k-1)*2 +1; }
int main() {
    int t,k,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        int temp;
        temp=tow(k);
        scanf("%d\n",&k);
        printf("%d\n",temp); }
    return 0; }