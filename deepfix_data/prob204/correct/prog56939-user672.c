#include <stdio.h>
#include <stdlib.h>
int main() {
int count=0;
int i,j;
char a[0];
a[0]=getchar();
i=0;
while(a[i]!='\n'){
    count=count+1;
    i++;
a[i]=getchar(); }
for(j=0;j<=count-1;j++){
if(a[count-1-j]==a[j]){
    if(j==count-1){
        printf("YES"); }
    else{
    continue;} }
    else
    {printf("NO");
        break; } }
	return 0; }