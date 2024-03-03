#include <stdio.h>
int main() {
    int n;
    int i,j,k,count,m;
    int str[200];
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&str[i]); }
    for(j=0;j<n;j++) {
        for(k=n;k<2*n;k++) {
            if(str[j]==str[k]) {
                count=k-j+1;
                if(j==0)
                {   m=count;} }
            if(count<m) {
                m=count; } } }
    printf("%d",m);
    return 0; }