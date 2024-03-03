#include <stdio.h>
#include <stdlib.h>
int m1(int a,int b,int c){
    if(a>b){
        if(b>c)
            return a;
        else{
            if(c>a)
            return c;
            else
            return a; }
    }else{
        if(a>c){
            return b;
        }else{
            if(c>b){
                return c;
            }else
              return b; } } }
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
	int n,i;
	scanf("%d\n",&n);
	int s[n];
	for(i=0;i<n;i++){
	    scanf("%d\n",&s[i]);
	    if((m1(s[i-1],s[i],s[i+1])==s[i])||(m2(s[i-1],s[i],s[i+1])==s[i]))
	    break; }
	if(i<n-1)
	printf("Yes");
	else
	printf("No");
	return 0; }