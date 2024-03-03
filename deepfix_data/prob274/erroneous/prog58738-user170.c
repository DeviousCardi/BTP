#include <stdio.h>
int main(){
    int d=0,j=0,i,n;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]==1)
        j=1; }
    if(j==1)
    {    for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(a[i]==a[j])
                break; }
            d++; }
        printf("%d %d",d-1,d-2); }
    int k=0;
    else if(j==0) {
        d=0;
         for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(a[i]==a[j]) {
                    break; }
                k++: }
            /{
                d++; } }
        printf("%d %d",d,d-2); }
    return 0; }