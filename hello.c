#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("input yur name");

    printf("hello, %s\n", name);
}


//#include <stdio.h>
//#include <cs50.h> //include libraries

//int main(void)
//{
//    string name = get_string("what is your name?\n");//get user input
// printf("hello, %s\n" , name); //print hello, user input
//}