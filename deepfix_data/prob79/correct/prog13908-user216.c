#include <stdio.h>
#include <stdlib.h>
int main() {
int n,k,i,s1,s2,j;
scanf("%d",&n);
int t[n+1];
for(i=1;i<=n;i++){
    scanf("%d",&t[i]); }
    i=1;j=n;
while(i!=j){
    s1=0;s2=0;
    for(k=1;k<=i;k++){
        s1=s1+t[i]; }
    for(k=n;k>=j;k--){
        s2=s2+t[i]; }
    if(s1>s2) j--;
     else  i++; }
s1=0;s2=0;
for(k=1;k<=i;k++){
    s1=s1+t[i]; }
for(k=i;k<=n;k++){
    s2=s2+t[i]; }
if(s1<s2)
printf("%d %d",i,i+1);
else printf("%d %d",i-1,i);
	return 0; }