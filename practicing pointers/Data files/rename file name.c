#include <stdio.h>
int main()
{
    if( rename("rename.txt","renamed.txt")==0)
        puts("renamed");
    else
        puts("error");
}
