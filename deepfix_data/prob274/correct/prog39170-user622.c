#include <stdio.h>
int main(){
int t,k;
    int n,i;
    int x=1;
    scanf("%d",&n);
    int s[n];
 for(i=0;i<n;i++){
                  scanf("%d",&s[i]);
                   t=4;
                      for(x=0;x<n;x++){
                                         if((x!=i)&&(s[x]==s[i])){t++; } }
                                    k=(t+1-i-x); }
printf("%d %d",t,k);
    return 0; }