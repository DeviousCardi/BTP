#include <stdio.h>
int main(){
    int n,i,j,min,diff,num;
    min=200;
    num=2*n;
    scanf("%d",&n);
    int enex[num];
    for(i=0; i<2*n; i++) {
        scanf("%d",&enex[i]); }
    for(i=0; i<2*n; i++) {
        for(j=i+1; j<2*n; j++) {
            if(enex[i]==enex[j]) {
                diff=j-i;
                if(diff<min) {
                    min=diff; } } } }
    printf("%d",min);
    return 0; }