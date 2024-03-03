#include <stdio.h>
int main() {
    int n,ex[200],ent[200],i,j,mn=201;
    scanf("%d\n",&k);
    for(i-0;i<200;i++) ent[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d ",&ex[i]);
        j=i-1;
        while(j>0) {
            if(ex[i]==ex[j]) {
                ent[ex[i]-1]=i-j;
                if(ent[ex[i]-1]<mn) mn=ent[ex[i]-1];
                break; }
            j--; } }
    printf("%d\n",mn);
    return 0; }