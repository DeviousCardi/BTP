#include <stdio.h>
int main() {
    int a[1000];
    int i,j,n;
    scanf("%d",&n);
    scanf("%d",&a[i]);
    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count=count+1; } }
    if(count==a[i])
    printf("Yes");
    else
    printf("No");
    return 0; }