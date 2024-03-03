# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int alice,bob;
void compare(int* time,int start,int end) {
    if(start>end){return;}
    if(start=end){alice++;return;}
    if(time[start]>time[end]){bob++;compare(time,start,end-1);}
    if(time[start]<time[end]){alice++;compare(time,start+1,end);} }
int main() {
 int n,*time,i;
 scanf("%d",&n);
 time=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++) {
     scanf("%d",time + i); }
 int start=0,end=n-1;
 compare(time,start,end);
 printf("%d %d",alice,bob);
 return 0; }