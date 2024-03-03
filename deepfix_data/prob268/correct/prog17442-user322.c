#include <stdio.h>
#include <stdlib.h>
long *memarray[3];
long getways(int x, int m) {
    int l=x/3;
    int k=x/5;
    if(m==1) return 1;
    if(m==2) return l;
    if(m==3) return (k*(((6*l)-(5*k))+1))/6; }
int main()
{   int n;
    scanf("%d",&n);
   long int ans=getways(n,1)+getways(n,2)+getways(n,3);
    printf("%ld",ans);
    return 0; }