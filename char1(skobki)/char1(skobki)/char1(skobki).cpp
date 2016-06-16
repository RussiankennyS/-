// char1(skobki).cpp: главный файл проекта.

#include <iostream>
#include <string>
#include "stdafx.h" 
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
 
int main()
{
    char *str=(char*)malloc(128);
    scanf("%s", str);
 
    int outbkt=true;
    int nobkt=true;
    while (*str!='\0')
    {
          if (*str=='('){printf("%c",*str++);outbkt=false;nobkt=false;}
          if (*str==')'){printf("%c",*str++);outbkt=true;}
          if(outbkt)printf("%c",*str++);
          if(!outbkt)str++;
    }
    printf("\n");
    if(!outbkt)printf("ti skobku ne zakril");
    if(nobkt)printf("net skobok");
    getch();
    return 0;
}