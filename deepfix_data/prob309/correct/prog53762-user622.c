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
                               if((s[j]==num)&&(s[j]!=',')){count++;} }
                            printf("%d",count) ;
             if(count==num-1){;
                 break; }
             else {printf("No");
                  break;} }
    return 0; }