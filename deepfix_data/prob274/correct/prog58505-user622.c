#include <stdio.h>
int main(){
int t,k;
    int n,i,j;
    int x=1,count=0;
    scanf("%d",&n);
    int s[n];
 for(i=0;i<n;i++){
                  scanf("%d",&s[i]);
                      for(x=1;x<=n;x++){
                                         if((x!=i)&&(s[x]==s[i])){count++;      } }
printf("%d",count); }
    return 0; }