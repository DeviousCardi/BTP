#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=1;
    int timer[n];
    int sum=0;
    for(i=0;i<n;i++) {
        scanf("%d",&timer[i]);
        sum=sum+timer[i]; }
    int girl_time=timer[i];
    while(girl_time+timer[i]<sum/2) {
        girl_time=girl_time+timer[i];
        i++; }
    int bob_time=timer[n-1];
    int j=1;
    while(bob_time+timer[n-j]<sum/2) {
        bob_time=bob_time+timer[n-j];
        j++; }
    if(girl_time>bob_time)
    printf("%d %d",i,j);
    else
    printf("%d %d",i+1,j);
	return 0; }