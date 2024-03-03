#include <stdio.h>
int main() {
    int n,i,j,ans=0
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d,",&a[i]); }
    for(i=0;i<n;i++)
    {  int count=0;
        for(j=0;j<n;j++) {
            if(a[i]==a[j]) {
                count++; } }
        if(count==a[i])
        ans++;
        else
        break; }
    if(ans==n)
    printf("Yes");
    else
    printf("No");
    return 0; }