#include <iostream>
#include <string>

// ************************************************
// klasa: notatka 
// opis:  Jest to klasa reprezentująca notatkę zawierającą tytuł oraz tekst notatki.
// pola:  tytul - tytuł notatki
//        tresc - zawartość (treść) notatki
//        identyfikator - unikatowy identyfikator notatki
//        licznik - przechowuje liczbę wszystkich utworzonych notatek
// autor: Viktor Chernikov
// ************************************************
class notatka
{
    public:
        notatka(std::string tytulNotatki, std::string trescNotatki)
        {
            licznik++;
            identyfikator = licznik;
            tytul = tytulNotatki;
            tresc = trescNotatki;
        }
        void wyswietl()
        {
            std::cout << "Tytuł notatki: " << tytul << std::endl;
            std::cout << "Treść notatki: " << tresc;
        }
        void diagnozuj()
        {
            std::cout << "Dane diagnostyczne: ";
            std::cout << licznik << ';' << identyfikator << ';' << tytul << ';' << tresc << std::endl;
        }
    private:
        static int licznik;
        int identyfikator;
    protected:
        std::string tresc;
        std::string tytul;
};

int notatka::licznik;


int main()
{
    notatka notatka1 = notatka::notatka("Pan Tadeusz", "Jest to ciekawa książka o panu który ma na imię Tadeusz");
    notatka1.wyswietl();
    notatka1.diagnozuj();
    
    std::cout << std::endl;

    notatka notatka2 = notatka::notatka("Mały Książę", "Opowieść o księciu który kocha róze i znalazł przyjaciela w pustyni");
    notatka2.wyswietl();
    notatka2.diagnozuj();

    return 0;
}