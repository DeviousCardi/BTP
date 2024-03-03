#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,t,index;
    int s[25];
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&s[i]); }
    scanf("%d",&t);
    for(i=0;i<t;i++){
       scanf("%d",&index);
       if(n==1){
          printf("Yes"); }
       else if(index==0){
            if(s[1]>s[0]){
               printf("Yes\n"); }
            else {
                 printf("No\n"); } }
       else if(index==(n-1)){
             if(s[index]<s[n-2]){
                printf("Yes\n"); }
             else{
                  printf("No\n"); } }
       else if(s[index]<s[index-1] && s[index]<s[index+1]){
            printf("Yes\n"); }
         else {
             printf("No\n"); } }
	return 0; }