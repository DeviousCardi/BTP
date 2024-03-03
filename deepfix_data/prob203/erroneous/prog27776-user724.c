#include <stdio.h>
int main() {
    int a[50],i,num,count=0,k;
    scanf("%d\n",&num);
    for(i=0;i<num;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]==a[j])
            count=count+1; } }
        if(count>0)
        printf("YES");
        else
        printf("NO"); }
	return 0; }