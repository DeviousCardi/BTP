#include <stdio.h>
int main() {
    int i,j,n;
    int a[i];
    int flag=0;
    scanf("%d",&n);
    scanf("%d ",&a[i]);
    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count=count+1; } }
    for(i=0;i<n;i++) {
    if(count==a[i])
    flag=1;
    break; }
    if(flag==1)
    printf("Yes");
    else
    printf("No");
    return 0; }