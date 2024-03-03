#include <stdio.h>
int n,k;
int a[30];
int check(int l,int sum) {
    if(l!=0&&(sum==k))
    return 1;
    for(;l<n-1;l++) {
        sum=sum+a[l];
        if(sum==k)
        return 1;
        return check(l+1,sum); }
    return 0; }
int main() {
    int i;
   scanf("%d %d\n",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d ",&a[i]);
   printf("%s",check(0,0)?"YES":"NO");
    return 0; }