#include <stdio.h>
int main(){
    int n,i,j,x,a[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j]) {
                x=j-i+2;
                printf("%d ",x); }
            continue; } }
    return 0; }