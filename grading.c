#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Obtained Marks: ");
    scanf("%d", &x);
    //C
    if (x >= 0 && x < 30) {
        printf("Grade = C");
    }
    //B
    else if (x >= 30 && x < 70) {
        printf("Grarde = B");
    }
    //A
    else if (x >= 70 && x < 90) {
        printf("Grade = A");
    }
    //A+
    else if (x >= 90 && x <= 100) {
        printf("Grade = A+");
    } 
    //invalid
    else {
        printf("Invalid Marks");
    }
    return 0;
}