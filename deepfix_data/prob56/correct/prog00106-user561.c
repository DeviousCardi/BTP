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
    return s;
    if (i<s)
    return (fact(2*j))/(fact(j)*fact(j+1));
    return catalan_num(i,j); }
int main() {
    int a,b,i;
    scanf ("%d",&a);
    int num[a];
    for (i=0;i<a;i++) {
        scanf ("%d",&num[i]);
        b=catalan_num(num[i],0);
        printf ("%d",b); }
    return 0; }