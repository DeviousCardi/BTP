#include <stdio.h>
int main() {
	int n,i,numbers,count=0;
	scanf("%d",&n);
	int freq[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&numbers);
	    freq[numbers]++; }
	for(i=1;i<=10000;i++) {
        if(freq[i]>1) {
            printf("YES\n");
            break; }
        else
        count=count+1; }
    printf("%d",count);
    if(count==10000)
    printf("NO\n");
	return 0; }