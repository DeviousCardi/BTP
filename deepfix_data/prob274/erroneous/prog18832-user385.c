#include <stdio.h>
int main(){
    int n,i;
    scanf("%d\n",&n);
    int b[n],c[n+2];
    for(i=0;i<n;i++) {
      scanf("%d ",&b[i]); }
    for(i=0;i<(n+2);i++) {
        if(i==0) {
            c[0]=1; }
         else {
            c[i]=b[c[i-1]-1]; } }
    for(i=0;i<(n+2);i++) {
        for(j=i+1;j<(n+2);j++) {
            if(c[i]=c[j]) { } }
    return 0; }