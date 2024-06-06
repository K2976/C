//to check the no. is even
# include<stdio.h>
# include<math.h>

int main() {
    int x;
    printf("enter the no.:");
    scanf("%d", &x);
    if(x % 2 == 0) {
        printf("the no. is an even no.: ");
    }
    else {
        printf("the no. is an odd no. \n");
    }
    printf("THANKS");
}