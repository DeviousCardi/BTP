#include <stdio.h>
#include <stdlib.h>
int fact(int i) {
    if (i==1)
    return 1;
    return i*fact(i-1); }
int catalan_num(int i,int j) {
    int s;
    s=(fact(2*j))/(fact(j)*fact(j+1));
    j=j+1;
    if (i==s)
    return 1;
    if (i<s)
    return 0;
    return catalan_num(i,j); }
int main() {
	return 0; }