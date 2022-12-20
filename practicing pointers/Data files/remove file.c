#include <stdio.h>
int main()
{
    if( remove("delete.txt")==0)
        puts("deleted");
    else
        puts("error");
}

