#include <stdio.h>
int main() {
    int n,i,j,flag=0,flag1=0,k;
    scanf("%d\n",&n);
    int sparr[n],ct[n];
    for(i=0;i<n;i++) ct[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d,",&sparr[i]); }
    for(i=0;i<n;i++) {
        k=sparr[i];
        for(j=0;j<n;j++) {
            if(sparr[i]==sparr[j]) {
                k--; } }
        if(k!=0) flag=1; }
    if(flag==1) printf("No");
    else printf("Yes");
    return 0; }