#include <stdio.h>
int add(int a, int b){
    printf("%d + %d = %d\n", a, b, a+b);
    return a+b;
}
int sub(int a, int b){
    printf("%d - %d = %d\n", a, b, a-b);
    return a-b;
}
int mul(int a, int b){
    printf("%d * %d = %d\n", a, b, a*b);
    return a*b;
}
int div(int a, int b){
    printf("%d / %d = %d\n", a, b, a/b);
    return a/b;
}
