#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int a[n];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int s;
    scanf("%d",&s);
    int d,j;
    for(d=0;d<n;d=d+1){
        for(j=1;(j>d)&&(j<=n);j=j+1){
            if((a[d]+a[j])==s) {
        printf("(%d,%d)",a[d],a[j]); }
  else{
      continue; } }
    printf("\n"); }
	return 0; }