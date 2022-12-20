#include <stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!='\n')
          {
              if (ch == '.')
                continue;

    putchar(ch);
          }

}
