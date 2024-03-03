#include <stdio.h>
#include <stdlib.h>
int n;
int main() {
int k,i,s1,s2,j;
scanf("%d",&n);
int t[n+1];
for(i=1;i<=n;i++){
    scanf("%d",&t[i]); }
    i=1;j=n;
while(i!=j){
    s1=0;s2=0;
    for(k=1;k<=i;k++){
       s1=s1+t[k]; }
    for(k=n;k>=j;k--){
       s2=s2+t[k]; }
    if(s1>s2) j--;
     else  i++; }
s1=0;s2=0;
for(k=1;k<=i;k++){
    s1=s1+t[k]; }
for(k=i;k<=n;k++){
    s2=s2+t[k]; }
if(s1<s2)
 printf("%d %d",i,n-(i));
 else printf("%d %d",i-1,n-(i-1));
	return 0; }