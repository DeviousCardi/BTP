#include <stdio.h>
#include <stdlib.h>
int fseries(int num) {
   if(num==1) {
       return 0; }
   else if(num==2) {
       return 1; }
   else {
       return(fseries(num-1)+fseries(num-2)); } }
int main() {
int n,a[20],p,r;
scanf("%d",&n);
for(p=0;p<n;p++) {
    scanf("%d",&a[p]);
    r = fseries(a[p]);
    printf("%d\n",r); }
	return 0; }