#include <stdio.h>
#include <stdlib.h>
int main() {
int count=0;
int i,j;
char a[20];
a[0]=getchar();
while(a[i]!='\t'){
    count=count+1;
    i++;
a[i]=getchar(); }
j=0;
while(j<count){
if(a[count-1-j]==a[j]){
    if(j==count-1){
        printf("YES");break; }
    else{ j++;
    continue; } }
    else
    {printf("NO");
        break; } }
	return 0; }