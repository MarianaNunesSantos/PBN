#include <stdio.h>

int multiplica (int x);

int multiplica (int x) {
          x = x * x;
          return x;
        }

int main() {
        int t=10;
        printf("%d - %d\n", multiplica(t), t);
        // saída: 100 10
}   