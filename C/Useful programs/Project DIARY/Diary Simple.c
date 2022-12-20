#include <time.h>
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


void pass()
{
    char password[20] = {0},password2[20];
    int i,result=0,prompt;

//creating new password
pMenu:
    fflush(stdin);
    puts("Enter New Password: ");
    input(password,20);
    puts("Confirm Password");
    input(password2,20);
    if((strcmp(password,password2))==0)
    {
        puts("New Password Set Successfully!");
        result = 1;
    }
    if(result==0)
    {
        printf("\n Didn't Match.. ");
        puts("Try Again?\t1:yes 0:exit");
        scanf("%d",&prompt);
        getchar();
        if(prompt==1)
            goto pMenu;
        else if(prompt==0)
            puts("\nTHANKS FOR RUNNING THIS PROGRAMME :)\nCREDIT: RAKIB MIAH");
        else
            puts("exiting...");
    }


//default password
    FILE *x = fopen("p4ssw0rd.txt","w");
    if(x == NULL)
    {
        puts("Error Opening File");
    }
    fprintf(x,"%s",password);
    fclose(x);

}


int new_entry()
{
    fflush(stdin);
    int status = 0,prompt; //just to make sure if data stored successfully
    char new_entry[1000],fileLoc [30],time_created[30];
start:
    puts("Enter Your Thoughts:");
    input(new_entry,1000);
    time_t t = time(0);   // get time now
    struct tm *now = localtime( & t );


    strftime (time_created,30,"%H:%M:%S",now);
    strftime (fileLoc,30,"data\\%Y-%m-%d %H-%M-%S.txt",now);


    FILE *x = fopen(fileLoc,"w");
    if(x)
    {
        fputs(new_entry,x);
        status = 1;
    }

    else
        puts("Failed to open the file!");
    fclose(x);

    if(status == 1)
    {
        printf("Entry added and saved at %s\nWanna try again?\n",time_created);
        puts("1: Yes\t 0: View all entries");
        scanf("%d",&prompt);
        getchar();
        if(prompt == 1)
            goto start;
        if(prompt == 0)
            show_all();

    }



}


int show_all()
{
    puts("coming soon");
}


void main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);



    int option;
    char password[20],passwordfile[20];
start:
    puts("Enter Password:");
    input(password,20);
    //checking password
    FILE *x = fopen("p4ssw0rd.txt","r");
    if(x == NULL)
    {
        pass();
    }
    while(fgets(passwordfile,sizeof(passwordfile),x)!=NULL)
    {
        if(strcmp(password,passwordfile)==0)
        {
            printf("Signed in at %d-%d-%d %d:%d:%d\n", tm.tm_year + 1900, tm.tm_mon + 1,tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
            printf("WELCOME, Rakib!\n");
main_menu:
            puts("\t\t****Main Menu***");
            printf("1: New Entry\n2: Show All Entries\n3: Change Password\n");
            scanf("%d",&option);
            if(option==3)
                pass();
            else if(option==1)
                new_entry();
            else if(option==2)
                show_all();
            else
                break;


            goto main_menu;
        }

        else
        {
            printf("\t\tno entry!\n");
            goto start;
        }

    }
}
