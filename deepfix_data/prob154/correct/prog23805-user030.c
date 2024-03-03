#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,area,f,arr[100];
    int n,i;
    scanf("%lf%lf%d",&a,&b,&n);
    for(i=0;i<n;i++) {
        arr[i]=a+(i*(b-a))/n;
    if(arr[i]<=(-1)) {
        f=1; }
    if(arr[i]>(-1)&&arr[i]<1) {
        f=(arr[i])*(arr[i]); }
    if(arr[i]>=1) {
        f=(arr[i])*(arr[i])*(arr[i]); } }
    area=0;
    for(i=0;i<n;i++) {
        area=area+(f*(b-a)/n); }
    printf("%0.4lf",area);
	return 0; }