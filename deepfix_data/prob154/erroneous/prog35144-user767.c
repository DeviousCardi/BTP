#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    double a,b,arr[n+1],area[n+1],area=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for(i=0;i<n+1;i++) {
        arr[i]=a+i*((b-a)/n); }
    for(i=0;i<n+1;i++) {
        if(a<=-1) {
            area[i]=(arr[i+1]-arr[i]); }
        else
        if((a>-1)&&(a<1)) {
            area[i]=a*a*((arr[i+1])-(arr[i])); }
        else
        if(a>=1) {
            area[i]=a*a*a*((arr[i+1])-(arr[i])); } }
    for(i=0;i<n+1;i++) {
        area=area+area[i]; }
    printf("%lf",area);
	return 0; }