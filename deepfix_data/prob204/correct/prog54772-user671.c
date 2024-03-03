#include <stdio.h>
#include <stdlib.h>
int reverse(int p[],int w){
    int j;
    for (j=0;j<w;j++){
    p[j]=p[w-j-1];}
    return p[j]; }
int main(){
    int i,a[100],j;
   for(i=0;i<100;i++){
      a[i]=getchar(); }
  int x[100];
  for (j=0;j<100;j++){
      x[j]=a[99-j];
  }if(x[100]==a[100]){
      printf("YES");
  }else printf ("NO");
	return 0; }