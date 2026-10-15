#include <stdio.h>

int n91(int n) {
if (n > 100) {
return n - 10;
}
else{
    return n91(n91(n+11));
}

}

int main() {
int n;

printf("Enter n: ");
scanf("%d", &n);
printf("%d\n", n91(n));
return 0;

}