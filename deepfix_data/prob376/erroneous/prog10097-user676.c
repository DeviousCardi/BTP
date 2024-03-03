#include <stdio.h>
#include <stdlib.h>
int catalan(int open,int close,int n,int count){
    if(close==n) {
    count++; }
    else if {
      if(open<n)
      catalan(open+1,close,n,count);
      if(close<open)
      catalan(open,close+1,n,count); } }
int main() {
	return 0; }