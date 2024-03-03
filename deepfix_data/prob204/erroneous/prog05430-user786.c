#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,arr[9898];
	int ch;
	int count=0;
	ch=getchar();
	while(ch!=EOF&&count<9898){
	    arr[count]=ch;
	    ch=getchar();
	    count=count + 1; }
	count=count-1;
	if(count%2==0){
	    j=0;
	    for(i=0;i<=count,i++){
	        if(arr[i]==arr[count-i]){j++;} }
	    if(j=(count+2)/2){printf("YES");}
	    else{printf("NO");} }
	else{printf("NO");}
	return 0; }