#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2,x=1;
    int a1[20],a2[20];
    scanf("%d",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",(a1+i)); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",(a2+i)); }
    for(int i=0;i<n1;i++) {
        for(int j=i+1;j<n1;j++) {
            if(a1[i]>a1[j]) {
                a1[i]+=a1[j];
                a1[j]=a1[i]-a1[j];
                a1[i]=a1[i]-a1[j]; } } }
    do {
        int i=0,j=0;
        if(a1[i]==a2[j]) {
            i++;
            j=0;
            if(i==n1) {
                printf("NO"); } }
        else {
            j++;
            if(j==n2) {
                x=0;
                printf("%d",a1[i]); } } }
    while(x);
	return 0; }