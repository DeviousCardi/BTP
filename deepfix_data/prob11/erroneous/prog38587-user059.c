#include <stdio.h>
int check(int a[],int index,int size,int s,int sum1,int sum2) {
    if(sum1==s||sum2==s)
    return 1;
    if(index==n-1)
     return sum1==s;
    else
     return check(a,index+1,s,size,sum1+a[index],sum2)||
            check(a,index+1,s,size,sum1,sum2+a[index]); }
int main() {
    int n,s,a[30],i,res;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
     scanf("%d",&a[30]);
    res=check(a,0,s,n,0,0);
    if(res==1)
     printf("YES");
    else
     printf("NO");
    return 0; }