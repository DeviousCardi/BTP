#include <stdio.h>
int lucky(int a[],int n,int k); {
    int i,j,count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++)
        if(i==j)
        continue;
        if(a[i]+a[j]==k)
        count++; }
    if(count==0)
    return 0;
    else
    return 1; }
int main(){
    int k,n;
    int a[100];
    scanf("%d",&k);
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int d;
    d=lucky(a,n,k)
    if(d==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }