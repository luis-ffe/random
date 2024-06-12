#include <iostream>
#include <cctype>
#include <string>


//to know the string size we could be using str.length();
//STD just specifies the library in use avoiding conflicts when using different ones in bigger projects or when merging work
//using namespace std just tells the compiller everything is in that one lib


//what are constructors in c++?

//what are methods in c++?

//what is c++98standard

//other shit from the subject pls!?

void to_uppercase(std::string &str)
{
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
    }
}

int main(int argc, char **argv)
{
    std::string input;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    for (int i = 1; i < argc; i++)
    {
        //input = (std::string)argv[i]; bellow the direct use of the constructor is a preffered way
        input = std::string(argv[i]);
        to_uppercase(input);
        std::cout << input;
    }
    std::cout << std::endl;
    return (0);
}

// void to_uppercase(char *str)
// {
//     while (*str)
//     {
//         *str = static_cast<char>(std::toupper(static_cast<unsigned char>(*str)));
//         str++;
//     }
// }

// int main(int argc, char **argv)
// {
//     char *input;

//     if (argc == 1)
//     {
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//     }
//     for (int i = 1; i < argc; i++)
//     {
//         input = argv[i];
//         to_uppercase(input);
//         std::cout << input;
//     }
//     std::cout << std::endl;
//     return 0; //goodpractice
//}

/*

str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));

Converts each character to unsigned char before calling std::toupper, then casts the result back to char.

Ensures that the std::toupper function gets the correct input avoids UB.
Correct Handling of Non-ASCII 

Harder to write lol

str[i] = std::toupper(str[i]);
works fine will do the job but we seek excelence

*/