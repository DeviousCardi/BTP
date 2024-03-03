#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i=0;
    int timer[n];
    int sum=0;
    for(i=0;i<n;i++) {
        scanf("%d",timer[i]);
        sum=sum+timer[i]; }
    girl_time=0;
    while(girl_time+timer[i]<sum/2) {
        girl_time=girl_time[i];
        i++; }
    bob_time=0;
    int j=0;
    while(bob_time+timer[n-j]<sum/2) {
        bob_time=bob_time+timer[n-j];
        j++; }
    if(girl_timer>=bob_timer)
    printf("%d %d",i,j);
	return 0; }