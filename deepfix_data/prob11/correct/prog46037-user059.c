#include <stdio.h>
int n;
int check(int array[],int index,int size,int s,int sum1,int sum2) {
    if(sum1==s||sum2==s)
    return 1;
    if(index==n-1)
     return sum1==s;
    else
     return check(array,index+1,s,size,sum1+array[index],sum2)||
            check(array,index+1,s,size,sum1,sum2+array[index]); }
int main() {
    int s,a[30],i,res;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
     scanf("%d",&a[30]);
    res=check(a,0,s,n,0,0);
    if(res==1)
     printf("YES");
    else
     printf("NO");
    return 0; }