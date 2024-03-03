#include <stdio.h>
#include <stdlib.h>
int step_hanoi(int n) {
    int ans;
    if(n==1)
       ans=1;
    else
       ans=step_hanoi(n-1)+1;
    return ans; }
int main() {
   int t,a[1000],i,value[1000];
   scanf("%d",&t);
   for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
        value[i]=step_hanoi(a[i]);
        printf("%d\n",value[i]); }
    return 0; }