#include<stdio.h>
int product(int x,int a[]) {
    int f;
    if(x==1)
        return(a[0]);
    else
        f= product(x-1,a)*(a[x-1]);
    printf("%d \n",f);
    return(f); }
int main() {
    int n,c,i;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    c= product(n,a);
    printf("%d",c);
    return 0; }