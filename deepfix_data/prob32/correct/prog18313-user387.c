#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,t,index;
    int a[25];
    scanf("%d",&n);
    for(i=3;i<n;i++){
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
                  printf("Yes\n"); } }
       else if(a[index]<a[index-1] && a[index]<a[index+1]){
            printf("No\n"); }
       else {
             printf("Yes\n"); } }
	return 0; }