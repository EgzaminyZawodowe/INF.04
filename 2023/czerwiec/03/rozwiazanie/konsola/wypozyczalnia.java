// ******************************************************
// nazwa klasy: film
// pola:        title - przechowuje tytuł filmu
//              rentCount - przechowuje liczbę wynajęć filmu
//              
// metody:      setTitle, null - przypisuje nowy tytuł filmowi
//              getTitle, String - zwraca tytuł filmu
//              rentsIncrease, null - inkrementuje liczbę wynajęć filmu
//              getRentCount, int - zwraca liczbę wynajęc filmu
// informacje:  Jest to klasa reprezentująca typowy film z wypożyczalni. Zawiera w sobie tytuł i licznik wynajęć filmu
// autor:       Viktor Chernikov
// ******************************************************
class film
{
    film()
    {
        title = "";
        rentCount = 0;
    }

    void setTitle(String newTitle)
    {
        if (newTitle.length() > 20)
        {
            title = newTitle.substring(0, 20);
        }
        else
        {
            title = newTitle;
        }
    }
    String getTitle()
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

    private String title;
    private int rentCount;
}
public class wypozyczalnia
{
    public static void main(String args[])
    {
        film newMovie = new film();

        System.out.println("Utworzono film.\nTytuł filmu: " + newMovie.getTitle() + "\nLiczba wypożyczeń: " + newMovie.getRentCount() + "\n");
        
        newMovie.setTitle("Morbius");
        System.out.println("Ustawiono nowy tytuł filmu: " + newMovie.getTitle());

        System.out.println("Przed inkrementacją liczbę wypożyczeń: " + newMovie.getRentCount());
        newMovie.rentsIncrease();
        System.out.print("Po inkrementacji liczby wypożyczeń: " + newMovie.getRentCount());
    }
}