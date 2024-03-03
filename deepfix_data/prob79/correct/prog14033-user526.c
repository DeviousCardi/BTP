#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,d=0,c=0,temp,temp2,*b;
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    b=a+n-1;
    while(b>a) {
        if(*b<*a) {
            c++;
            temp=*b;
            b--;
            *b+=temp; }
        else if(*b>*a) {
            d++;
            temp2=*a;
            a++;
            *a+=temp2; }
        else if((*b==*a)&&(a!=b)) {
            d++;
            temp2=*a;
            a++;
            *a+=temp2; } }
        printf("%d %d",d,c);
	return 0; }