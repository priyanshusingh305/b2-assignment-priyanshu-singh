#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="college mpec";
    char b[20]={'c','o','l','l','e','g','e','m','p','e','c','\0'};

    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}
