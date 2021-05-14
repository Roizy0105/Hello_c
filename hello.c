#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Asking user for input 
    string name = get_string("what is your name?\n");
    
    //Greeting 
    printf("hello,%s\n", name);
}