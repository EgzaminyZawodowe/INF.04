#include <iostream>
#include <string>

// **********************************************
// nazwa funkcji:       findNwd
// opis funkcji:        Szuka największą wspólną wielokrotność na podstawie algorytmu Euklidesa.
// parametry:           a - pierwsza liczba całkowita dodatnia
//                      b - druga liczba całkowita dodatnia
// zwracany typ i opis: Największa wspólną wielokrotność dla dwóch liczb.Zwracana wartość jest liczbą dodatnią całkowitą.
// autor:               Viktor Chernikov
// **********************************************
unsigned int findNwd(unsigned int a, unsigned int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
void getInput(char sym, unsigned int* out)
{
    std::string userInput;
    long parsedNum;

    std::cout << "Wprowadź " << sym << ": ";
    std::cin >> userInput;
    parsedNum = std::stol(userInput);
    if (parsedNum < 1)
    {
        throw std::invalid_argument("Tylko liczby dodatnie!");
    }
    *out = parsedNum;
}

int main()
{
    try
    {
        unsigned int a, b;
        getInput('a', &a);
        getInput('b', &b);
        std::cout << "Największa wspólna wielokrotność: " << findNwd(a, b);
    }
    catch (...)
    {
        std::cout << "Podana wartość nie jest liczbą dodatnią całkowitą!";
    }
    return 0;
}