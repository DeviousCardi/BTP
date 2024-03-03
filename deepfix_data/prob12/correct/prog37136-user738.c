#include <stdio.h>
#include<math.h>
int main(){
    int i,j,n;
    scanf("%d\n",&n);
    int a[2*n];
    for(i=0;i<2*n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<2*n;i++) {
        for(j=i;j<2*n;j++) {
            if(a[i]==a[j]) {
                printf("%d  ",abs(i-j)); }
            else {
                continue; } } }
    return 0; }