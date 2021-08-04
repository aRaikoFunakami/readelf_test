#include <stdio.h>

extern int b();
extern int c();

int main(){
    int i;
    i = b() + c();
    printf("i = %d\n", i);
}