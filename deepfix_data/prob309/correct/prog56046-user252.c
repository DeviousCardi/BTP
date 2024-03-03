#include <stdio.h>
int main() {
    int n,i,j,flag,flag1=0,k=0;
    scanf("%d\n",&n);
    int sparr[n],ct[n];
    for(i=0;i<n;i++) {
        scanf("%d",&sparr[i]);
        j=i-1;
        while(j>=0) {
            flag=0;
            if(sparr[i]==ct[j]) {
                ct[j]--;
                flag=1;
                break; }
            j--; }
        if(flag==0) {
            ct[k]=sparr[i];
            k++; } }
    for(i=0;i<k;i++) {
        if(ct[i]!=1) {flag1=1; break;} }
    if(flag1==1) printf("No");
    else printf("Yes");
    return 0; }