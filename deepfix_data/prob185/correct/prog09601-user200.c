#include <stdio.h>
int is_possible(int a[],int size,int target,int i);
int main() {
    int n,s,c1;
    int a[30];
    scanf("%d %d", &n,&s);
    for(c1=0;c1<n;c1++) {
        scanf("%d", &a[c1]); }
   if( is_possible(a,n,s,0) )
   printf("YES\n");
   else
   printf("NO\n");
    return 0; }
int is_possible(int a[],int size,int target,int i) {
    if(target == 0 && i<=size) {
        return 1; }
    else if(target!=0 && i >(size-1) )
    return 0;
    else
    return ( is_possible(a,size,target-a[i],i+1) || is_possible(a,size,target,i+1) ); }