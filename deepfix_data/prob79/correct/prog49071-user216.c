#include <stdio.h>
#include <stdlib.h>
int main() {
int n,n1,i;
int s1=0,s2=0;
scanf("%d",&n);
int t[n+1];
for(i=1;i<=n;i++){
    scanf("%d",&t[i]); }
while(n1<=n){
    for(i=1;i<=n1;i++){
        s1=s1+t[i]; }
    for(i=n1+1;i<=n;i++){
        s2=s2+t[i]; }
    if(s1==s2){printf("%d %d",n1,n-n1);break;}
    n1++; }
	return 0; }