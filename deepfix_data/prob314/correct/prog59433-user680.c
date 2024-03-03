#include <stdio.h>
#include <stdlib.h>
int m2(int a,int b,int c){
    if(a>b){
        if(b>c)
        return c;
        else
        return b;
    }else{
        if(a>c)
        return c;
        else
        return a; } }
int main() {
	int n,i,j;
	scanf("%d\n",&n);int s[n];
	for (i=0;i<n;i++){
	    scanf("%d\n",&s[i]); }
	int t;
	scanf("%d\n",&t);
	int a,b[t];
	for(j=0;j<t;j++){
	    scanf("%d\n",&a);
	    if(m2(s[a+1],s[a],s[a-1])==s[a])
	    b[j]=1;
	    else
	    b[j]=0; }
	for(j=0;j<t;j++){
	    if(b[j]==1)
	    printf("Yes");
	    else
	    printf("No");}
return 0; }