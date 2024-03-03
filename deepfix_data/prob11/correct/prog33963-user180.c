#include <stdio.h>
int check(long int a[],int size,int start,long int v,long int s){
    if(start==size)
        return v==s;
    return check(a,size,start+1,v+a[start],s)||check(a,size,start+1,v,s) ; }
int main()
{   long int n,s;
    scanf("%ld %ld",&n,&s);
    long int t[30];
    int i=0;
    while(i<n){
        scanf("%ld ",&t[i]);
        i++; }
    if(check(t,n,0,0,s))
        printf("YES");
    else
        printf("NO");
    return 0; }