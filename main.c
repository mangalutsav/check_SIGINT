//  A C program that check when Ctrl+C is pressed
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
int check = 0;
// Signal Handler for SIGINT
void sigintHandler(int sig_num)
{
    // Reset handler to catch SIGINT next time
    signal(SIGINT, sigintHandler);
    int char_check = 0;
    while(!char_check)
    {
        printf("\n Do you want to quit? press y/n \n");
        char a;
        scanf(" %c", &a);
        if(a=='y')
        {
            printf("\n Sayonara \n");
            char_check = 1;
            exit(0);
        }
        else if(a=='n')
        {
            printf("\n OK you ma continue\n");
            char_check = 1;
        }
        else
        {
            printf("\n Invalid response please retype \n");
        }
    }
    fflush(stdout);
}
 
int main ()
{
    // Set the SIGINT (Ctrl-C) signal handler to sigintHandler 
       
    
    signal(SIGINT, sigintHandler);
 
    // Infinite loop
    while(1)
    {        
    }
    return 0;
}