#include <stdio.h>
int main() {
	int n
	scanf("%d",&n);
	int a[50];
	for(int i=0;i<n;i++){
	    scanf("%d ",&a[i]); }
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        if(a[i]==a[j]&&i==j){
	            p=1 }
	        else if(a[i]==a[j]&&i!=j){
	            p=0;
	            break; }
	        else{
	            p=1; } } }
	if(p==1){
	    printf("NO"); }
	else{
	    printf("YES"); }
	return 0; }