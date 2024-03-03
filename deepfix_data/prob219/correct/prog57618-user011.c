#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) {
    if (a > b)
        return a;
    return b; }
int main() {
int x,y,z;
int p,q;
int m1, m;
int assignedp;
int soln;
scanf("%d%d%d",&x,&y,&z);
m1 = max(x,y);
m = max(m1, z);
if (x != m){
    p = x;
    assignedp = 1; }
if (y != m) {
    if (assignedp) {
        q = y; }
    else {
        p = y; } }
if (z != m ) {
    q = z; }
soln = max(p, q);
printf("%d\n",soln);
	return 0; }