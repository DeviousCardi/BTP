#include <stdio.h>
#include <stdlib.h>
 int f(int r) {
     if(r==0)
     return 0;
     if(r==1)
     return 1;
     else return
     f(r-1)+f(r-2); }
int main() {
    int t,i;
 scanf("%d",&t);
 int a[t];
 for(i=0;i<t;i++) {
     scanf("%d",&a[i]);
    printf("%d\n",f(a[i])); }
	return 0; }