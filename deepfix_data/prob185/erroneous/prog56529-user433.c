#include <stdio.h>
long rec(long i,long sum,long arr[],long s);
int main() {
long d,s;
scanf("%ld%ld",&d,&s);
long a[d];
for(long t=0;t<d;t++)
scanf("%ld",&a[t]);
    if(rec(0,0,a,s))
    printf("YES");
    else
    printf("NO");
    return 0; }
long rec(long i,long sum,long arr[],long s) {
    if(sum==s)
    return 1;
    if(i==3&&sum!=s)
    return 0;
    return (rec(i+1,sum+a[i+1],arr)||rec(i+1,sum,arr)); }