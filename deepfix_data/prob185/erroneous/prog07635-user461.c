#include <stdio.h>
int n,s;
int fun(int a[],int index,int sum) {
    if(index>=n)return 0;
    if(sum==s)return 1;
    if(sum>s)return 0;
    else return(fun(a,index+1,sum+a[index])||fun(a,index+1,sum)); }
int main() {
   scanf("%d%d",&n,&s);
   for (int i=0;i<n;++i)
        scanf("%d",&a[i]);
    int k=fun(a,0,0);
    if(k==1)printf("YES");
    else printf("NO");
    return 0; }