#include <stdio.h>
int main(){
int k,b;
scanf("%d\n%d",&k,&b);
int s[b];
int x,y;
for(x=0;x<b;x++){
    scanf("%d",&y);
    s[x]=y; }
if(k<(2*b-1)) printf("lucky");
else printf("unlucky");
    return 0; }