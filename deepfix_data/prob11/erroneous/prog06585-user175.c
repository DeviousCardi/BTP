#include <stdio.h>
int sum(int a[],int i,int j) {
    if(i==j)
    return a[j];
    else
    return a[i]+sum(a,i+1,j); }
int main() {
    int n,s,i,j,p,flag=0;
    int a[1000000]
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            p=sum(a,i,j);
            if(p==s) {
                flag=1;
                break; } }
        if(flag==1)
            break; }
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    return 0; }