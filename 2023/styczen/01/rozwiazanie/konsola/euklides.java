import java.util.Scanner;

public class euklides {
    // **********************************************
    // nazwa funkcji:       findNwd
    // opis funkcji:        Szuka największą wspólną wielokrotność na podstawie algorytmu Euklidesa.
    // parametry:           a - pierwsza liczba całkowita dodatnia
    //                      b - druga liczba całkowita dodatnia
    // zwracany typ i opis: Największa wspólną wielokrotność dla dwóch liczb. Zwracana wartość jest liczbą dodatnią całkowitą.
    // autor:               Viktor Chernikov
    // **********************************************
    public static long findNwd(long a, long b)
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
    public static long getInput(Scanner in, char sym)
    {
        System.out.print("Wprowadź " + sym + ": ");
        long i = in.nextLong();
        if (i < 1)
        {
            throw new IllegalArgumentException("Tylko liczby dodatnie!");
        }
        return i;
    }
    public static void main(String[] args) 
    {
        try
        {
            Scanner in = new Scanner(System.in);
            long a = getInput(in, 'a');
            long b = getInput(in, 'b');
            System.out.print("Największa wspólna wielokrotność: ");
            System.out.print(findNwd(a, b));
        }
        catch (Exception e)
        {
            System.out.print("Podana wartość nie jest liczbą dodatnią całkowitą!");
        }
    }
}