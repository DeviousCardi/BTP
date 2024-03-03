#include <stdio.h>
int main(){
    int n,i,j,c,min=400;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<2*n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                c=j-i; } }
        if(min>c) {
            min=c; } }
    printf("%d",min);
    return 0; }