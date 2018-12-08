#include <stdio.h>
int main(){
#define quad(x) ((x) * (x) * (x))
int i = 3;
int a = quad(i++);
printf("%d", a);
    return 0;
}