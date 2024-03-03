#include <stdio.h>
int targetCount(int a[], int n, int target){
	int count=0;
	for (int i=0; i<n; i++) {
	    if (a[i]== target) count++; }
	return count; }
void IndicesTarget(int a[], int n, int target, int indices[]){
	int count=-1;
	for (int i=0; i<n; i++) {
	    if (a[i]==target) {
	        count++;
	        indices[count]=i; } } }
int main() {
	int a[10]= {1, 2,  3,  5,  4, 9,  7, 1, 2, 3};
	printf("%d", targetCount(a, 10, 1));
	return 0; }