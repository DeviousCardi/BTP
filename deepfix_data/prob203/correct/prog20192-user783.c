#include <stdio.h>
int main() {
    int n,m,i,j,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            printf("%d %d\n",a[i],a[j]);
        if(a[i]==a[j])
        count=count+1; } }
    if(count>0)
    printf("YES");
    else
    printf("NO");
    return 0; }