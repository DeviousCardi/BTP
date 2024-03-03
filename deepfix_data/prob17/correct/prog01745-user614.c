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
	int a[10]= {1, 1,  3,  5,  4, 9,  7, 1, 2, 3};
	int n_i= targetCount(a, 10, 1);
	int indices[n_i];
	IndicesTarget(a, 10, 1, indices);
	for (int i=0; i<n_i; i++) {
	    printf("%d ", indices[i]); }
	return 0; }