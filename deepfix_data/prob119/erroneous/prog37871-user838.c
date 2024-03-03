#include <stdio.h>
#include <stdlib.h>
int step_hanoi(int n) {
    int ans;
    if(n==1)
       ans=1;
    else
       ans=step_hanoi(int (n-1))+1;
    return ans; }
int main() {
   int t,a[1000],i,value;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
        scanf("%d",&a[i]);
        value=step_hanoi(int (a[i]));
        printf("%d",&value); }
    return 0; }