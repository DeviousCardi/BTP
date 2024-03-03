#include <stdio.h>
#include <stdlib.h>
int main() {
char ch1,ch2;
int siz1,size2,i;
scanf("%d",&siz1);
char ch[siz1];
for(i=0;i<siz1;i++) {
    ch1=getchar();
    ch[i]=ch1; }
for(i=0;i<siz1;i++) {
    printf("%c",ch[i]); }
return 0; }