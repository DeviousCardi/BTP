#include <stdlib.h>
#include <stdio.h>
int read_int(int s[],int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d\n",&s[i]); }
    return i; }
int main() {
    int t,s[20],u[20],n,i;
    scanf("%d\n",&n);
    read_int(s,n);
    scanf("%d\n",&t);
    read_int(u,n);
    for(i=0;i<t;i++){
        if(s[u[i]]>s[u[i]-1]||s[u[i]]>s[u[i]+1]){
            printf("Yes\n"); }
        else
        printf("No\n"); }
	    return 0; }