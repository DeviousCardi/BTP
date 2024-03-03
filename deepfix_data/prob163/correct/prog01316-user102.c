#include <stdio.h>
#include <stdlib.h>
int max(int,int);
int rem(int,int);
int main() {
	int s1,s2,i,j,l,m;
	scanf("%d",&s1);
    scanf("%d",&s2);
    int n1[s1],n2[s2];
    for(i=0;i<s1;i++){
    n1[i]=getchar(); }
    for(j=0;j<s2;j++){
    n2[j]=getchar(); }
    s1=max(s1,s2);
    int ans[s1];
    for(m=s2;m<s1;m++){
    n2[m]=0; }
    ans[0]=rem(n1[0],n2[0]);
    putchar(ans[0]);
    for(l=1;l<s1;l++){
    ans[l]=rem((n1[l]+n2[l]),(ans[l-1]/10));
    putchar(ans[l]); }
    	return 0; }
int rem(int a, int b){
    int x=a+b;
    if (x>9){
    x=x%10; }
    return x; }
int max(int a,int b){
if(a>=b){return a;}
else {return b;} }