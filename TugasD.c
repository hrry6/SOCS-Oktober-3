#include <stdio.h>

int F(int n) {
    if (n == 1) return 1;

    if (n % 2 == 1) {
        return F(n - 1) + F(n + 1);
    } else {
        return F(n / 2);
    }
}

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        int b;
        scanf("%d", &b);
        
        int value = F(b);
        printf("Case #%d: %d\n", i, value);
    }

    return 0;
}
