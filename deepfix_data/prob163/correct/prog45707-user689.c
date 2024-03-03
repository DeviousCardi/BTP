#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,i,j,k;a = 0;int g;
 int z;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    int x[a]; int w[b];
    i = 0; j = 0;
    while(i<a) {
        x[i]=getchar();
        i++; }
    while(j<=b) {
        w[j]=getchar();
        j++;
    }k =0;
    if(a>b)
    {   int y[a];
        while(k<a) {
        y[k] = x[k]+w[k];
        k++; }
    k = 0;
     while(k<a) {
            printf("%d",y[k]);
            k++; } }
    else
    {   int y[b];
        while(k<b) {
            y[k] = x[k] + w[k]+g;
            g = 0;
            if(y[k]>=10) {
                y[k] = y[k]%10;
                g = y[k]; }
            k++;
        }k =0;
        while(k<b) {
            putchar(y[k]);
            k++; } }
	return 0; }