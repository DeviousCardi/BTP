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
   long long int A[100];
   int i,j;
   int n;
   int a[100];
   scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d\n",&a[i]); }
   for(i=0;i<100;i++){
       A[i]=steps(i,'A','B','C'); }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
       if(a[i]==A[j]){
           printf("yes");
       }else{
           printf("no"); } } }
	return 0; }