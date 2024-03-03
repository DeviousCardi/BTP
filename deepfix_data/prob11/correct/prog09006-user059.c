#include <stdio.h>
int n;
int check(int a[],int index,int size,int s,int s1) {
    printf("%d",s);
    if(s==0)
    return 1;
    if(index==n-1)
     return s==0;
    else
     return check(a,index+1,size,s-a[index],s1)||check(a,index+1,size,s,s1+a[index]); }
int main() {
    int s,a[30],i,res;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
     scanf("%d",&a[30]);
    res=check(a,0,n,s,0);
    if(res==1)
     printf("YES");
    else
     printf("NO");
    return 0; }