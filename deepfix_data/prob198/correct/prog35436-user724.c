#include <stdio.h>
#include <stdlib.h>
int main() {
    int b[50],i,j,min,count=0,num,k,a[50],num2;
    scanf("%d\n",&num);
    min=num;
    for(i=0;i<num;i++) {
        scanf("%d",&a[i]);
        if(min>a[i]) {
            k=a[i];
            min=k; } }
    scanf("%d\n",&num2);
    for(j=0;j<num2;j++) {
        scanf("%d",&b[j]);
        if(min==b[j])
        count=count+1; }
    if(count>0)
    printf("NO");
    else
    printf("%d",min);
	return 0; }