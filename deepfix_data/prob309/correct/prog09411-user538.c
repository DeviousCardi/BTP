#include <stdio.h>
int main() {
    int i,j,n;
    int  count=0,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                count=count+1; } }
        if(count!=i+1)
        flag=1;
        break; }
    if(flag==1)
    printf("NO");
    else
    printf("YES");
    return 0; }