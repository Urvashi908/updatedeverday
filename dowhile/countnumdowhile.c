//"	Count Number of Digits of an Integer
#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    do{
        n =n/10;
        ++count;
    }while (n != 0);

    printf("Number of digits: %d", count);
}

