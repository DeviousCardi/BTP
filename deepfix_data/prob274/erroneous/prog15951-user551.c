#include <stdio.h>
int main(){
    int n,t=0,k=0,flag=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    while(flag!=2) {
        k++;
        t++;
        i = a[i];
        for(j=0;j<i;i++) {
            if(a[j]==a[i]) {
                k=k-j;
                break;
                flag =2 } } }
    printf("%d %d",t,k)
    return 0; }