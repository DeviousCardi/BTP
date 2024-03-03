#include <stdio.h>
int duplicate(int n,int a[50]){
    int i,j,flag=0;
    for(i=0;i<n;i++){
        j=i+1;
        while(j<n){
            if(a[j]==a[i]){
                flag=1;
                break; }
            else{
                flag=0;
                j+=1; } }
        if(flag==1){
            break; } }
    return flag; }
int main() {
	int i,n,flag;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	flag=duplicate(n,a[]);
	if(flag==1){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }