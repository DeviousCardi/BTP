#include <stdio.h>
int search(long int a[],int start,int n,int s); {
    if(a[start]==s)
    return 1;
    else
    for(i=start;i<n;i++) {
        for(j=start;j<n;j++) {
        t=t+a[j];
        if(t<s)
        continue; } } }
int main() {
    long int n,s;
    int i;
    scanf("%ld %ld",&n,&s);
     long int a[n+1];
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
    return 0; }