#include <stdio.h>
#include <stdlib.h>
int main() {
 char a[10000000000];
 int i,n;
 scanf("%d",&n);
  int f=0;
 for(i=0; i<n; i++){
            if( a[i]==a[n+1-i]){
                f=f+1; }
    else{
        f=f+0;} }
 if(f=((n+1)/2)){
     printf("YES"); }
 else{
     printf("NO"); }
	return 0; }