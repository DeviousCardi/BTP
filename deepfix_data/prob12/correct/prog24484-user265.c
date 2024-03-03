#include <stdio.h>
int main(){
    int n;
    int a[200],i,j,k[200];
    scanf("%d\n",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                k[i]=j-i;
                printf("%d ",k[i]); } } }
    for(i=((2*n)-1);i>0;i--) {
        if(k[i]<k[i-1]) {
            int c;
            c=k[i];
            k[i]=k[i-1];
            k[i-1]=c; } }
    return 0; }