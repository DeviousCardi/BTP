#include <stdio.h>
int main()
{int h,p,i,x;
int y=0;
scanf("%d%d",&h,&p);
for(i=1;i<=p;i=i+1){
    scanf("%d",&i);
    for(j=0;j<p;j=j+1){
        scanf("%d",&j);
        if(i>j){x=i-j;
        y=y+x;} } }
if(y>=h){printf("No");}
else printf("Yes");
    return 0; }