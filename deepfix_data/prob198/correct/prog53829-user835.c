#include <stdio.h>
#include <stdlib.h>
void sort(int ar1[],int n) {
    int temp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(ar1[i]<ar1[j]) {
                temp=ar1[i];
                ar1[i]=ar1[j];
                ar1[j]=temp; } } } }
int main() {
    int num1,num2,i,ar1[20],ar2[20],ar3[20];
    int sum=0;
	scanf("%d\n",&num1);
	for(i=0;i<num1;i++) {
	    scanf("%d\n",&ar1[i]);
	    ar3[i]=ar1[i]; }
	scanf("%d\n",&num2);
	for(i=0;i<num2;i++) {
	    scanf("%d\n",&ar2[i]); }
	sort(ar3,num1);
	for(i=0;i<num2;i++) {
	    if(ar3[i]==ar2[i]) {
	        sum=0;
	        continue; }
	    else {
	        sum=ar3[i];
	        break; } }
	if(sum==0) {
	    printf("NO"); }
	else {
	    printf("%d",sum); }
	return 0; }