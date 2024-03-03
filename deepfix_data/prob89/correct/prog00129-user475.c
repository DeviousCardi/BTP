#include <stdio.h>
int main() {
    int a[100],num,n,i,j,k,flag=0;
    scanf("%d\n",&num);
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(j=0;j<n;j++) {
        for(k=0;k<n;k++) {
            if(a[k]+a[j]==num) {
                flag=1;
                break; } }
        if(flag==1)
            break; }
    if(flag==0)
        printf("unlucky");
    else
        printf("lucky");
    return 0; }