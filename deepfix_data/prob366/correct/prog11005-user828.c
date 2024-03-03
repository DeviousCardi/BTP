#include <stdio.h>
int main(){
    int n,i,a[400],count=0, min,j;
    scanf("%d", &n);
    for(i=0; i<2*n; i++) {
        scanf("%d", &a[i]); }
    min=n;
    for(i=0; i<n; i++) {
        for(j=i+1; j<2*n; j++) {
            if(a[i]==a[j]) {
                count=count+1;
                break; }
            else
              count=count+1; }
        printf("%d\n", count); }
    if(count<min) {
        min=count; }
    printf("%d", min);
    return 0; }