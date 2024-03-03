#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d/n",&a[i]); }
scanf("%d/n",&t);
int h[t];
for(j=0;j<t;j++){
    scanf("%d/n",&h[j]); }
for(i=0;i<t;i++) {
    if(h[i]==0) {
        if(a[h[i]]<a[h[i]+1]) {printf("Yes");}
        else {printf("No");} }
    else if(h[i]==n-1) {
      if(a[h[i]]<a[h[i]-1]) {printf("Yes");}
      else {printf("No");} }
    else {
        if(a[h[i]-1]>a[h[i]]&& a[h[i]]<a[h[i]+1])
           { printf("Yes");}
        else{ printf("No");} } }
	return 0; }