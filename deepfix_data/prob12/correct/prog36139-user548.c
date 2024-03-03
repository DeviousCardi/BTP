#include <stdio.h>
int main(){
    int min,i,j,n,a[210],d;
    scanf("%d",&n);
    min=2*n;
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<((2*n)-1);i++) {
        for(j=i+1;j<2*n;j++) {
            if(a[i]==a[j]) {
                d=j-i;
                if(min>d)
                min=d; } } }
    printf("%d",min);
    return 0; }