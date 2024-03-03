#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,j,t;
int a[n];
int h[t];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("\n%d",&a[i]); }
scanf("\n%d",&t);
for(j=0;j<t;j++){
    scanf("\n%d",&h[j]); }
for(i=0;i<t;i++) {
    if(h[t]==0) {
        if(a[h[t]]<a[h[t]+1]) {printf("Yes");}
        else {printf("No");} }
    if(h[t]==n-1) {
      if(a[h[t]]<a[h[t]-1]) {printf("Yes");}
      else {printf("No");} }
    else {
        if(a[h[t]-1]>a[h[t]]&& a[h[t]]<a[h[t]+1])
           { printf("Yes");}
        else{ printf("No");} } }
	return 0; }