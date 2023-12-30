#include <stdio.h>

int main() {
    int X = 40;

    printf("Valuse of X = %d\n", X);

    int *pX = &X;
    //integer pointer named pX is set to address of X
    printf("%d\n", &X);
  
    int y = *pX;
    // integer named y is set to the thing pointed to by pX 
    printf("Valuse of y = %d\n", y);

   return 0;
}
