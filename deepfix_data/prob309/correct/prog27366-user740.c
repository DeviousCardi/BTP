#include <stdio.h>
int main() {
    int n,i,j,count,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(a[j]==a[i])
            count++; }
        if(count==a[i])
        flag=0;
        else {
            flag=1;
            break; }
        if(flag==1)
        break; }
    if(flag==0)
    printf("Yes");
    else
    printf("No");
    return 0; }