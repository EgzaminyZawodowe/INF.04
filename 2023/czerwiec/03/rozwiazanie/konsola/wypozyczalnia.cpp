#include <iostream>
#include <string>

// ******************************************************
// nazwa klasy: film
// pola:        title - przechowuje tytuł filmu
//              rentCount - przechowuje liczbę wynajęć filmu
//              
// metody:      setTitle, nullptr - przypisuje nowy tytuł filmowi
//              getTitle, string - zwraca tytuł filmu
//              rentsIncrease, nullptr - inkrementuje liczbę wynajęć filmu
//              getRentCount, int - zwraca liczbę wynajęc filmu
// informacje:  Jest to klasa reprezentująca typowy film z wypożyczalni. Zawiera w sobie tytuł i licznik wynajęć filmu
// autor:       Viktor Chernikov
// ******************************************************
class film 
{
    private:
        std::string title;
        int rentCount;
    public:
        film()
        {
            title = "";
            rentCount = 0;
        }
        
        void setTitle(std::string newTitle)
        {
            title = newTitle;
            if (title.length() > 20)
            {
                title.erase(20, title.length());
            }
        }
        std::string getTitle()
        {
            return title;
        }
        void rentsIncrease()
        {
            rentCount++;
        }
        int getRentCount()
        {
            return rentCount;
        }
};

int main()
{
    film newMovie;
    
    std::cout << "Utworzono film. \nTytuł filmu: " << newMovie.getTitle() << "\nLiczba wypożyczeń: " << newMovie.getRentCount() << "\n\n";

    newMovie.setTitle("Morbius");
    std::cout << "Ustawiono nowy tytuł filmu: " << newMovie.getTitle() << "\n";

    std::cout << "Przed inkrementacją liczbę wypożyczeń: " << newMovie.getRentCount() << "\n";
    newMovie.rentsIncrease();
    std::cout << "Po inkrementacji liczby wypożyczeń: " << newMovie.getRentCount();

    return 0;
}