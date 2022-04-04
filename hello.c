#include <cs50.h>
#include <stdio.h>

string myfunc(string input);
string name;

int main(void)
{
    myfunc(name);
}

string myfunc(string input)
{
    input = get_string("What is your name? ");
    printf("Hello, %s\n", input);
    return input;
}
