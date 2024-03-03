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
   int n;
   int a[100];
   scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d\n",&a[i]); }
   for(i=0;i<n;i++){
       for(j=0;j<a[i];j++){
           if(a[i]==steps(j,'A','B','C')){
               printf("yes"); } }
       printf("no"); }
	return 0; }