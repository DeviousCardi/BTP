#include <stdio.h>
int main(){
int k,b;
scanf("%d\n%d",&k,&b);
int s[b];
int x,y;
for(x=0;x<b;x++){
    scanf("%d",&y);
    s[x]=y; }
int n;
for(n=0;n<b-1;n++){
    if(k==(2*n-1)) printf("lucky");
    else printf("unlucky"); }
    return 0; }