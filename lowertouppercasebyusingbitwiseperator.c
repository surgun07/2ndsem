//write a program to convert lower case letter to upper case letter
//by using bitwise operator


#include<stdio.h>
void main()
{
    char ch;
    scanf("%c",&ch);
    ch=ch&223;
    printf("%c",ch);
}

