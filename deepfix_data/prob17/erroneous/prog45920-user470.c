#include <stdio.h>
int main() {
	int n1,x;
	scanf("%d",&n1);
	int a1[20];
	for(int i=0;i<n1;i++){
	    scanf("%d",&a1[i]); }
	int n2;
	scanf("%d",&n2);
	int a2[20],b[20];
	for(int j=0;j<n2;j++){
	    scanf("%d",&a2[j]); }
	for(int i=0;i<n1;i++){
	    if(a2[0]==a1[i]){
	        x=i;
	        break; } }
	for(int j=0;j<n2;j++){
	 for(int k=x;k<x+n2;k++){
	     b[j]=a1[k]; } }
	for(int j=0;j<n2;j++){
	    if(b[j]==a2[j]){
	        p=0; }
	    else{
	        p=1;
	        break; } }
	if(p==0){
	    printf("YES"); }
	else{
	    printf("NO"); }
	return 0; }