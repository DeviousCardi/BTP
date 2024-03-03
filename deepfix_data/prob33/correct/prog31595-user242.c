#include <stdio.h>
int main() {
int hlth;
int p;
int a,i,ght,ght1;
scanf("%d\n%d",&hlth,&p);
scanf("%d",&ght);
a=ght;
for(i=1;i<=p;i++){
    scanf(" %d",&ght1);
    if(a>ght1){
        hlth=hlth-(ght-ght1); }
    a=ght1; }
if(hlth>0) printf("Yes");
else printf("No");
    return 0; }