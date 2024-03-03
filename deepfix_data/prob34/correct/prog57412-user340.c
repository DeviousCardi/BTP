#include <stdlib.h>
#include <stdio.h>
int read_int(int s[],int size){
    int i;
    for(i=0;i<size;i++){
        scanf("%d\n",&s[i]); }
    return i; }
int row_peak(int s[]){
    int i;
   int const n;
    for(i=0;i<n;i++){
    if(s[i]>s[i-1]&&s[i]<s[i+1]){
        return 1; }
    else return 0; } }
int main() {
    int t,s[20],u[20],n,i;
    scanf("%d\n",&n);
    read_int(s,n);
    scanf("%d",&t);
    read_int(u,n);
    for(i=0;i<t;i++){
        if(row_peak(s[u[i]]==1)){
            printf("Yes\n"); }
        else{
            printf("No\n"); } }
	    return 0; }