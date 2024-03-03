#include <stdio.h>
int main(){
    int min,i,j,n,a[210],d,min=2n;
    scanf("%d",&n);
    for(i=0;i<2n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2n-1;i++) {
        for(j=i;j<2n;j++) {
            if(a[i]==a[j]) {
                d=j-i;
                if(min>d)
                min=d; } } }
    printf("%d",min)
    return 0; }