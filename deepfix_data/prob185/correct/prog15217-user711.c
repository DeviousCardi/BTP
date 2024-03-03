#include <stdio.h>
int flag;
int s=0;
void check(int a[],int n,int x){
    if(n==0)
    	return;
	check(a,n-1,x+a[n-1]);
    check(a,n-1,x);
    if(x+a[n-1]==s) {
    	flag=1;
        return; }
    return; }
int main() {
    int n;
    scanf("%d %d\n",&n,&s);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
	check(a,n,0);
	if(flag==1){
	    printf("YES"); }
	else{
	    printf("NO"); }
    return 0; }