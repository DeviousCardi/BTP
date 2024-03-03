#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int n1,n2,i,j,count=0,x,min=pow(2,31)-1;
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    int b[n2];
    for(j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    for(i=0;i<n1;i++) {
        for(j=0;j<n2;j++) {
            count=0;
            if(a[i]==b[j]) {
                count++;
                break; }
            else
            printf("%d != %d\n",a[i],b[j]); }
        if(count==0) {
            x=a[i];
            if(min>x) {
                min=x; } }
        printf("second loop to start\n"); }
    if(count==n1)
    printf("NO");
    else
    printf("%d",min);
	return 0; }