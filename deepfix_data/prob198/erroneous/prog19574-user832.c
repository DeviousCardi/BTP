#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1,n2;
    int a[20],b[20];
    scanf("%d",&n1);
    for(int i=0;i<n1;i++) {
        scanf("%d",(a+i)); }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++) {
        scanf("%d",(b+i)); }
    for(int i=0;i<n1;i++) {
        for(int j=i+1;j<n1;j++) {
            if(a[j]<a[i]) {
                a[i]+=a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j]; } } }
    do {
        int i=0,j=0;
        if(b[j]==a[i]) {
            i++;
            j=0; }
        else {
            j++; }
        if(i==n1 || j==n2)
        {break;} }
    while((i-n1)||(j-n2));
	return 0; }