#include <stdio.h>
#include <stdlib.h>
int main() {
int count=0;
int i,j;
int a[20];
a[0]=getchar();
while(a[i]!='\t'){
    count=count+1;
    i++;
a[i]=getchar(); }
for(j=0;j<=count-1;){
if(a[count-1-j]==a[j]){
    if(j==count-1){
        printf("YES");break; }
    else{ j++;
    continue; } }
    else
    {printf("NO");
        break; } }
	return 0; }