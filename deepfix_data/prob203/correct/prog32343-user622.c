#include <stdio.h>
int main() {
int n,i,j,count=0;
scanf("%d",&n);
int s[n];
for(i=0;i<n;i++) {
                 scanf("%d",&s[i]); }
for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++){
        if(s[j]==s[i]){count=count+1;
        break;} } }
if(count!=0){printf("YES");}
else{ printf("NO");}
	return 0; }