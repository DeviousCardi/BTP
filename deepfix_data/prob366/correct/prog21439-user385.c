#include <stdio.h>
int main(){
    int n,i,j,t;
    scanf("%d\n",&n);
    int a[2*n],m=2*n-1;
    for(i=0;i<2*n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<(n);i++) {
        for(j=(n);j<2*n;j++) {
            if(a[i]==a[j])
            if(j-i<m) {
            m=(j-i); }
            break; } }
      printf("%d\n",m);
    return 0; }