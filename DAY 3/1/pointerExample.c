#include <stdio.h>
int main(){
    int x = 5;
    int *ptr = &x; // pointer to x
    int *ptr2=NULL; // uninitialized pointer
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr (address of x): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value of ptr2: %p\n", (void*)ptr2);
    return 0;
}
