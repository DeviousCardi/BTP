#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
    scanf("%d\n",&n1);
    int a[20];
    scanf("%d",&a[0]);
    int max=a[0];
    for(int i=1;i<n1;i++) {
        scanf("%d\n",&a[i]);
        if(max>a[i])
        max=a[i]; }
    int n2;
    scanf("%d",&n2);
    int b[20];
    int flag=0;
    for(int i=0;i<n2;i++) {
    scanf("%d",&b[i]);
    if(max==b[i])
    flag=1; }
    if(flag==1)
    printf("NO")
    else
    printf("%d",max);
	return 0; }