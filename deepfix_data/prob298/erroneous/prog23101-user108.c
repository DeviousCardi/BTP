#include <stdio.h>
#include <stdlib.h>
int define_cat(int cat[17], int ind) {
    if (ind==1) {
        return 1; }
    else (ind>1) {
        int a=1;
        cat[ind-1]=a*define_cat(cat, ind-1);
        return cat[ind-1]; } }
int check(int num, int cat[17], int ind) {
    if (ind==0) {return 0;}
    if (cat[ind-1]==num) {
        return 1;
    } else {
        return check(num, cat, ind-1); } }
int main() {
	int n, cat[17], i, x;
	scanf("%d", &n);
	define_cat(cat, 17);
	for (i=0; i<n; i++) {
	    scanf("%d", %x);
	    if(check(x, cat, 17)) {
	        printf("yes");
	    } else {
	        printf("no"); } }
	return 0; }