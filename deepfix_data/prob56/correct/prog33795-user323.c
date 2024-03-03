#include <stdio.h>
#include <stdlib.h>
  int catalan(int n){
      int i,result=0;
      if(n<=1){
          return 1; }
       else for(i=0;i<n;i++){
       result= result+catalan(i)*catalan(n-i-1); }
      return result; }
int main() {
    int t,i,j,k;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf("%d\n",&a[i]); }
    for(k=0;k<t;k++){
    for(j=0;j<20;j++){
        if(a[k]<catalan(j)){
            printf("%d\n",catalan(j));
            break;
        }}}
	return 0; }