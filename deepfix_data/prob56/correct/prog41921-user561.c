#include <stdio.h>
#include <stdlib.h>
long fact(int i) {
    if (i==0)
    return 1;
    return i*fact(i-1); }
long catalan_num(int i,int j,long str[15]) {
    if (i<str[j])
    return str[j];
    j=j+1;
    return catalan_num(i,j,str); }
int main() {
    int a,i,j;
    long str[15],b;
    scanf ("%d",&a);
    int num[a];
    for(j=0;j<15;j++) {
        str[j]=((fact(2*j))/fact(j))/fact(j+1); }
    for (i=0;i<a;i++) {
        scanf ("%d",&num[i]);
        b=catalan_num(num[i],0,str);
        printf ("%lu\n",b); }
    return 0; }