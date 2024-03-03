#include <stdio.h>
int main() {
    int i,j,n;
    int 2n-1;
    int  count=0,flag=0;
    scanf("%d",&n);
    int a[2n-1];
    for(i=0;i<2n-1;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<2n-1;i++) {
        for(j=0;j<2n-1;j++) {
            if(a[i]==a[j]) {
                count=count+1; } }
        if(count!=i+1)
        flag=1;
        break; }
    if(flag==1)
    printf("No");
    else
    printf("Yes");
    return 0; }