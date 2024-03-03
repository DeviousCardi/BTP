#include <stdio.h>
#include <stdlib.h>
int catelen(int n){
	    if(n==0){
	        return 0;
	    }else{
	    return (4n-2)catlen(n-1); } }
int main() {
    int i,j,flag=0;
    int n;
    int a[100];
    scanf("%d",n);
    for(i=0;i<n;i++){
        scanf("%d\n",a[i]); }
    for(i=0;i<n;i++){
        for(j=0;j<=17;j++){
            if(a[i]==catelen(j)){
                printf("yes");
                flag=1;
                break; } }
        if(flag==0)
        printf("no"); }
	return 0; }