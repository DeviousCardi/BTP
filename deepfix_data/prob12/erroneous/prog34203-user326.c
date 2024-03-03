#include <stdio.h>
int main(){
    int n;
    int str[200];
    for(i=0;i<2*n;i++) {
        scanf("%d",&str[i]); }
    count=0;
    m=201;
    for(j=0;j<n;j++) {
        for(k=n;k<2*n;k++) {
            if(str[j]==str[k]) {
                count=k-j; }
            if(count<m) {
                m=count; } } }
    return 0; }