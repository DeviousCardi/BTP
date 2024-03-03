#include <stdio.h>
int main() {
int n,count,num,i,j;
scanf("%d",&n);
int s[20];
for(i=0;i<n;i++){
               scanf("%d",&num);
               s[i]=num;
               count=0;
               for(j=1;j<n;j++){
                               if(s[j]==num){count++;} }
               count=count+1;
             if(count==num){printf("Yes");
                 break; }
             else printf("No"); }
    return 0; }