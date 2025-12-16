#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored in p: %p\n", p);
    printf("Value at address p: %d\n", *p);
    return 0;
}
/* Sample Output:
Value of a: 10
Address of a: 0x7ffed5e999b4
Value stored in p: 0x7ffed5e999b4
Value at address p: 10
*/
