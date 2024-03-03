#include <stdio.h>
int main(){
    int n,i,j,x;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==b[j]) {
                x=j-i;
                printf("%d\n",x); }
            break; } }
    return 0; }