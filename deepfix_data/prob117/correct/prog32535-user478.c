#include <stdio.h>
#include <stdlib.h>
int steps(int n,char first,char third,char second){
    int count;
    if(n>0){
        count=steps(n-1,first,second,third);
        count++;
        count+=steps(n-1,second,third,first); }
    return count; }
int main() {
  int i,j;
  int n,flag;
  int a[100];
  scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d\n",&a[i]); }
   for(i=0;i<n;i++){
       flag=0;
       for(j=0;j<=a[i];j++){
           if(a[i]==steps(j,'A','B','C')){
               printf("yes");
               flag=1;
               break; } }
       if(flag==0)
       printf("no"); }
	return 0; }