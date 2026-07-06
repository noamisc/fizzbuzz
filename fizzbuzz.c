#include <stdio.h>

void fizzbuzz(int n)
{
     int printed = 0;

     if (n % 3 == 0) {
          printf("Fizz");
          printed = 1;
     }
     if (n % 5 == 0) {
          printf("Buzz");
          printed = 1;
     }

     if (printed) putc('\n', stdout);
     else printf("%d\n", n);
}

int main(void)
{
     for (int i = 0; i <= 100; i++) {
          fizzbuzz(i);
     }

     return 0;
}
