#include <stdio.h>
#include <stdlib.h>
long long int hanoi(int n){
    if(n==0)
    return 0;
    if(n>0)
    return (hanoi(n-1)*2 + 1); }
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
           if(a[i]==hanoi(j)){
               printf("yes\n");
               flag=1;
               break; } } }
	return 0; }