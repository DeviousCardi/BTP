#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    int cat=0,i;
    if(a<=1)
    {    return 1; }
    else if(a>1) {
        for(i=0;i<a;i++){
        cat=cat+catalan(i)*catalan(a-i-1); }
        return cat; }
    return 0; }
int main() {
  int n,i,a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&a[i]); }
  for(i=0;i<n;i++){
  printf("%d\n",catalan(a[i])); }
	return 0; }