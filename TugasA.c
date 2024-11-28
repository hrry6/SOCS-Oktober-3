#include <stdio.h>

int counter = 0;

long long fibonacci_modified(long long n) {

    if (n == 0) {
        return 1;
    }

    if (n == 1) {
        return 2;
    }
    
    if (n % 3 == 0) {
        counter++;
    }

    if (n % 5 == 0) {
        return n * 2;
    }
    
    n = fibonacci_modified(n - 1) + n + fibonacci_modified(n - 2) + (n - 2);
    
    return n;
}

int main() {
    int a;
    scanf("%d", &a);
    
    long long Arr[a];

    for(int i = 0; i < a; i++) {
        scanf("%lld", &Arr[i]); 
        
        counter = 0; 
        long long result = fibonacci_modified(Arr[i]); 
        
        printf("Case #%d: %lld %d\n", i + 1, result, counter); 
    }

    return 0;
}