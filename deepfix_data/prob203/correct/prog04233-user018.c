#include <stdio.h>
int main() {
	int arr[50];
	int n,i,flag=0,dup=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=1;
                dup=1;
                break; } }
        if(flag==1){
            break; } }
    if(dup==1){
        printf("YES\n"); }
    else{
        printf("NO\n"); }
	return 0; }