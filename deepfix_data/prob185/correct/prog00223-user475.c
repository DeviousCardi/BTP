#include <stdio.h>
#include<stdlib.h>
int s;
int comb(int a[],int n,int i,int sum) {
    if(i>n-1)
        return 0;
    else if(i<n) {
        if(sum==s)
            return 1;
        else
            return (comb(a,n,i+1,sum) || comb(a,n,i+1,sum+a[i])); }
    return 0; }
int main() {
    int n,i;
    scanf("%d %d",&n,&s);
    int *a=(int *)(malloc(n*sizeof(int)));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    int flag;
    flag=comb(a,n,0,0);
    if(flag==0)
        printf("NO");
    else
        printf("YES");
    return 0; }