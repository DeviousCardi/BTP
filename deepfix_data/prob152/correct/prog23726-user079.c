#include <stdio.h>
int main() {
    int n,sum=0,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
    scanf("%d ",&a[i]);
    sum=sum+a[i]; }
    if(n%2!=0 || sum%2!=0)
    printf("NO");
    else {
        sum=sum/2;
        for(i=0;i<n-1;i++)
        {   for(j=i;j<n-1;j++) {
            sum=sum-a[j];
            if(sum==0) {
                printf("YES");
                break; } }
           if(sum==0)
           break; }
        if(sum!=0)
        printf("NO"); }
    return 0; }