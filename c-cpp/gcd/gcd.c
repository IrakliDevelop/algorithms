#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    if ((x>0) && (y>0)) {
        printf("%d %d %d\n", x, y, gcd(x,y));
    }
    return 0;
        
}
int gcd(num1, num2)
int num1, num2;
{
    int t;
    do {
        if (num1 < num2) {
            t = num1;
            num1 = num2;
            num2 = t;
        }
        num1 = num1%num2;
    } while (num1 != 0);
    return(num2);
}