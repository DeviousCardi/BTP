#include <stdio.h>
#include <stdlib.h>
int recbin(int n, int k){
	if(n== 0 && k== 0){
		return 1; }
	else if(n!= 0 && k== 0){
		return 1; }
	else if(n<k){
	    return 0; }
	else
		return recbin(n-1,k-1)+recbin(n-1,k); }
void bin(int b){
    int arr[21][21];
    int i,j;
    for(i=0;i<21;i++){
        for(j=0;j<21;j++){
            arr[i][j]=recbin(i,j); } }
    int n,k;
    for(n=0;n<=20;n++){
        for(k=0;k<=20;k++){
            if(arr[n][k]==b){
                printf("%d %d\n",n,k); } }
    {break;} } }
int main() {
    int b;
    scanf("%d",&b);
    bin(b);
	return 0; }