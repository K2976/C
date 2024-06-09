#include<stdio.h>
#include<math.h>
 int main() {
    int x;
    printf("enter the no.: ");
    scanf("%d", &x);
    int i = 0;
    while(i <= x) {
        printf("%d \n   ",i);
        i++;
    }
    return 0;
 }