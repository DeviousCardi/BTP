#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("\n%d",&a[i]); }
scanf("\n%d",&t);
int h[t];
for(j=0;j<t;j++){
    scanf("\n%d",&h[j]); }
for(i=0;i<t;i++) {
    if(n==1){printf("Yes");}
else    if(h[i]==0) {
        if(a[h[i]]<a[h[i]+1]) {printf("Yes\n");}
        else {printf("No\n");} }
    if(a[h[i]]==n-1) {
      if(a[h[i]]<a[h[i]-1]) {printf("Yes\n");}
      else {printf("No\n");} }
    else {
        if(a[h[i]-1]>a[h[i]]&& a[h[i]]<a[h[i]+1])
           { printf("Yes\n");}
        else{ printf("No\n");} } }
	return 0; }