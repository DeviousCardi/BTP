#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int num,i,c,j,b,m;
    scanf("%d",&num);
    for(i=1; i<=num; i++) {
        if(pow(10,i)>num) {
            c=i;
            break; } }
    int s[c];
    for(j=1; j<=c; j++) {
        b=pow(10,j);
        if(num%10==num/10) {
           (int((num/b))%b)=s[j-1]; }
        else
        break; }
    for(m=0; m<c; m++) {
        if (s[m]==s[c-m]) {
            printf("YES");
            break; }
        else {
            printf("NO");
            break; } }
	return 0; }