#include <stdio.h>
#include <stdlib.h>
unsigned long int catalan(int a){
    int cat=0,i;
    if(a<=1)
    {    return 1; }
    else if(a>1) {
        for(i=0;i<a;i++){
        cat=cat+catalan(i)*catalan(a-i-1); }
        return cat; }
    return 0; }
int main() {
  int i,j,n,k, a[5];
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      k=0;
      for(j=0;j<17;j++){
          if(a[i]==catalan(j)){
          printf("yes\n");}
          if(a[i]==catalan(j)){
          break;}
          else {
              k=k+1;} }
      if(k==17)
      printf("no\n"); }
	return 0; }