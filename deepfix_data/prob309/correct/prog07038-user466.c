#include <stdio.h>
int main() {
    int i,j,n;
    int a[100];
    int flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    int count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
            count++; }
        if(count!=a[i])
            flag=1; }
    if(flag==1)
    printf("No");
    else
    printf("Yes");
    return 0; }