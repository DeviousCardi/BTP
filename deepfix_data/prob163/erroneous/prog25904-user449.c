#include <stdio.h>
#include <stdlib.h>
void store(char chh[],int j);
int main() {
char ch1,ch2;
int siz1,size2,i;
scanf("%d",&siz1);
char ch[siz1];
scanf("%d",&siz2);
for(i=0;i<siz1;i++)
{   store(ch,i); }
    putchar(ch1);
return 0; }
void store(char chh[],int j) {
    chh[j]=getchar(); }