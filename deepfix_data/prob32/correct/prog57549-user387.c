#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,t,index;
    int a[25];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++){
       scanf("%d",&index);
       if(n==1){
          printf("Yes"); }
       else if(index==0){
            if(a[1]>a[0]){
               printf("Yes\n"); }
            else {
                 printf("No\n"); } }
       else if(index==n-1){
             if(a[index]<a[n-2]){
                printf("No\n"); }
             else{
                  printf("Yes\n"); }
      if(a[i]<a[i-1] && a[i]<a[i+1]){
            printf("Yes"); }
       else {
             printf("No"); } } }
	return 0; }