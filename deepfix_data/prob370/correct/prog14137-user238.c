#include<stdio.h>
#include<math.h>
int main() {
    int s1,s2,s3,max,min,mid;
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>s2) {
        if(s1>s3) {
            max=s1;
            if(s2>s3) {
                min=s3;
                mid=s2; }
            else {
                min=s2;
                mid=s3; } }
        else {
            max=s3;
            min=s2;
            mid=s1; } }
    else {
        if(s2>s3) {
            max=s2;
            if(s1>s3) {
                min=s3;
                mid=s1; }
            else {
                min=s1;
                mid=s3; } }
        else {
            max=s3;
            min=s1;
            mid=s2; } }
    if(max>mid+min)
    printf("INVALID");
    else if(max*max>min*min+mid*mid)
    printf("OBTUSE");
    else if(max*max==min*min+mid*mid)
    printf("RIGHT");
    else if(max*max<min*min+mid*mid)
    printf("ACUTE");
    return 0; }