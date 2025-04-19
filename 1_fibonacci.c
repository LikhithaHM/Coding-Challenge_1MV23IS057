#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int a = 0, b = 1, next;
    for(i = 0; i < n; i++) {
        if(i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    return 0;
}