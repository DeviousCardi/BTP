#include <stdio.h>
int main() {
    int a[50],i,j,num,count=0;
    scanf("%d\n",&num);
    for(i=0;i<num;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<num;i++) {
        for(j=i+1;j<num;j++) {
            if(a[i]==a[j])
            count=count+1; } }
        if(count>0)
        printf("YES");
        else
        printf("NO");
	return 0; }