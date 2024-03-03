#include <stdio.h>
int n,s;
int check(int a[],int index,int size,int s,int s1) {
    if(s==0)
     return 1;
    if(index==n)
     return s==0;
    else
     return check(a,index+1,size,s-a[index],s1)||check(a,index+1,size,s,s1+a[index]); }
int main() {
    int a[30],i,res;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    res=check(a,0,n,s,0);
    if(res==1)
     printf("YES");
    else
     printf("NO");
    return 0; }