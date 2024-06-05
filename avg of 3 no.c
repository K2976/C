# include<stdio.h>
# include<math.h>
// output 1 when 78
//output 0 when 55
int main() {
    int x, y, z;
    printf("first no.: ");
    scanf("%d", &x);
    printf("second no.: ");
    scanf("%d", &y);
    printf("third no.: ");
    scanf("%d", &z);
   
    printf("avg = %d ", (x+y+z) / 3);

    return 0;
}