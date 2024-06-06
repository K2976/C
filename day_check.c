# include<stdio.h>
# include<math.h>

int main() {
    int day;
    printf("enter the day no.: ");
    scanf("%d", &day);
//switch
    switch (day) {
        case 1: printf("MONDAY");
                break;
        case 2: printf("TUESDAY");
                break;
        case 3: printf("WEDNESDAY");
                break;
        case 4: printf("THURSDAY");
                break;
        case 5 : printf("FRIDAY");
                break;
        case 6 : printf("SATURDAY");
                break;
        case 7 : printf("SUNDAY");
                break;
    return 0;

    }
    

}