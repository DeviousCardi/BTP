#include <stdio.h>
int main() {
int n,count,num,i,j;
scanf("%d",&n);
int s[20];
for(i=0;i<n;i++){
               scanf("%d",&num);
               s[i]=num;
               for(j=1;j<n;j++){count=0;
                               if((s[j]==num)&&(s[j]!=',')){count++;} } }
             if(count==num-1){printf("Yes"); }
             else {printf("No"); }
    return 0; }