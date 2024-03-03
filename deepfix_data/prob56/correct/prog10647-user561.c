#include <stdio.h>
#include <stdlib.h>
int fact(int i) {
    if (i==0)
    return 1;
    return i*fact(i-1); }
int catalan_num(int i,int j,int str[10]) {
    if (i<str[j])
    return str[j];
    j=j+1;
    return catalan_num(i,j,str); }
int main() {
    int a,b,i,j,str[10];
    scanf ("%d",&a);
    int num[a];
    for(j=0;j<10;j++) {
        str[j]=(fact(2*j))/(fact(j)*fact(j+1)); }
    for (i=0;i<a;i++) {
        scanf ("%d",&num[i]);
        b=catalan_num(num[i],0,str);
        printf ("%d\n",b); }
    return 0; }