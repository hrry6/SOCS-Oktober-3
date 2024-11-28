#include <stdio.h>

int countCalls; 
void Fibo(int n, int *result) {
    countCalls++;
    
    if (n == 0) {
        *result = 0; 
        return;
    }
    if (n == 1) {
        *result = 1; 
        return;
    }

    int fib1, fib2;
    Fibo(n - 1, &fib1); 
    Fibo(n - 2, &fib2); 
    *result = fib1 + fib2; 
}

int main() {
    int T, N;

    scanf("%d", &T); 
    
    for (int i = 1; i <= T; i++) {
        scanf("%d", &N); 
        
        countCalls = 0; 
        int result;     
        Fibo(N, &result);

      
        printf("Case #%d: %d\n", i, countCalls);
    }

    return 0;
}

