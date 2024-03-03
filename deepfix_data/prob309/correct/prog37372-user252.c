#include <stdio.h>
int main() {
    int n,i,j,flag=0,flag1=0,k=0;
    scanf("%d\n",&n);
    int sparr[n],ct[n];
    for(i=0;i<n;i++) {
        scanf("%d",&sparr[i]);
        j=i-1;
        while(j>=0) {
            if(sparr[i]==ct[j]) {
                ct[j]--;
                flag=1;
                break; }
            j--; }
        if(flag==0) {
            ct[k]=sparr[i];
            k++; }
        if(flag==1) flag=0; }
    for(i=0;i<k;i++) {
        printf("%d",ct[i]);
        if(ct[i]!=1) {flag1=1; break;} }
    if(flag1==1) printf("No");
    else printf("Yes");
    return 0; }