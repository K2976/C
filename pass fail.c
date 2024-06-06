# include<stdio.h>
# include<math.h>

int main() {
    int x;
    printf("Marks obtained: ");
    scanf("%d", &x);
    if(x>=0 && x<=30) {
        printf("FAIL");
    }
    else if(x>30 && x<100) {
        printf("PASS");
    }
    else {
        printf("Invalid Marks");
    }
    return 0;
}