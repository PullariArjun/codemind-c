#include<stdio.h>
int main()
{
    char str[99];
    fgets(str,99,stdin);
    printf("%s",str);
}