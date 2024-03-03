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
void copyArray(int a[], int b[], int lenb, int index){
	int j=0;
	for (int i=index; i<index+lenb; i++) {
	    b[j]= a[i];
	    j++; } }
int main() {
	int a[6]= {1, 2, 3, 4, 5, 6};
	int b[6]={1, 3, 2, 4, 5, 6};
	int i;
	for (i=0; i<6; i++) {
	    if (a[i]!= b[i]) break; }
	if (i==6) printf("Same");
	else printf("Not same");
	return 0; }