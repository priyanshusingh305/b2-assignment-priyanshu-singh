#include<stdio.h>
double cubeNum(double);
int main()
{
    int num;
    double cube;
 
    printf("Enter a number: ");
    scanf("%d", &num);
    
    cube = cubeNum(num);
    
    printf("Cube of %d is: %.2f", num, cube);
    
    return 0;
}
double cubeNum(double n){
    return (n * n * n);
}
