#include <stdio.h>
#include <string.h>
int input(char a[],int n)
{
    fgets(a,n,stdin);
    fflush(stdin);
    int i = strlen(a);
    if(i<n-1)
        a[i-1]='\0';
}
int main()
{
    char id[3][10],name[3][10],age[3][3],s[10];
    int i,result=0,prompt;
    for(i=0; i<=2; i++)
    {
        printf("student(%d) info: id\t",i+1);
        input(id[i],10);
        printf("student(%d) info: name\t",i+1);
        input(name[i],10);
        printf("student(%d) info: age\t",i+1);
        input(age[i],3);
        printf("\n");
    }

search_menu:
    printf("\nid to search:\t");
    input(s,10);

    //comparing them id & s
    for(i=0; i<=2; i++)
    {
        if((strcmp(id[i],s))==0)
        {
            printf("\nname: %s\nage: %s\n",name[i],age[i]);
            result = 1;
        }
    }
    if(result==0)
        printf("\nnot found! ");

    result=0;//turning it off for future result

    puts("search again?\t1:yes 0:about");
    scanf("%d",&prompt);
    getchar();
    if(prompt==1)
        goto search_menu;
    if(prompt==0)
        puts("\nTHANKS FOR RUNNING THIS PROGRAMME :)\nCREDIT: RAKIB MIAH");
        else
            puts("exiting...");


        return 0;

}
