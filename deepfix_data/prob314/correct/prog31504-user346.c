#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,num[20],n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d\n",&num[i]); }
    int t,j;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&j);
        if(j==0)
        {   if(num[j]<num[j+1])
        printf("Yes\n");
        else {printf("No\n");} }
        if(j==n-1)
        {    if(num[j-1]>num[j])
        printf("Yes\n");
        else {printf("No\n");} }
        if(j!=0&&j!=n) {
            if((num[j])<(num[j-1])&&(num[j])<(num[j+1]))
            printf("Yes\n");
            else  printf("No\n"); } }
	return 0; }