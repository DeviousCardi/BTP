# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int alice=1,bob=1;
void compare(int* times,int start,int end) {
    if(start==end){alice++;return;}
    if(end-start==1){return;}
    if(times[start-1]<times[end-1]) {
        alice++;
        times[end-1]=times[end-1]-times[start+1];
        compare(times,start+1,end); }
    if(times[start-1]>times[end-1]) {
        bob++;
        times[start-1]=times[start-1]-times[end-1];
        compare(times,start,end-1); }
    if(times[start-1]==times[end-1]) {
        alice++;
        bob++;
        compare(times,start+1,end-1); } }
int main() {
 int n,*times,i;
 scanf("%d",&n);
 times=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++) {
     scanf("%d",times + i); }
 int start=1,end=n;
 compare(times,start,end);
 printf("%d %d",alice,bob);
 return 0; }