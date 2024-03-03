#include <stdio.h>
int main(){
    int n;
    int a[125];
    int i,j,k,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i]); }
    a[0]=1;
    for(j=1;j<=n;j++) {
        for(i=0;i<j;i++) {
            if(a[i]==a[j]) {
                t=j;
                break; } }
        it(t!=0) {
            break; } }
    printf("%d",t);
    return 0; }