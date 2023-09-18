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
    public notatka(String tytulNotatki, String trescNotatki)
    {
        licznik++;
        identyfikator = licznik;
        tytul = tytulNotatki;
        tresc = trescNotatki;
    }

    public void wyswietl()
    {
        System.out.println("Tytuł notatki: " + tytul);
        System.out.println("Treść notatki: " + tresc);
    }
    public void diagnozuj()
    {
        System.out.print("Dane diagnostyczne: ");
        System.out.println(licznik + ";" + identyfikator + ";" + tytul + ";" + tresc);
    }

    protected String tytul;
    protected String tresc;
    private int identyfikator;
    private static int licznik;
}
class notatnik
{
    public static void main(String[] args) 
    {
        notatka notatka1 = new notatka("Pan Tadeusz", "Jest to ciekawa książka o panu który ma na imię Tadeusz");
        notatka1.wyswietl();
        notatka1.diagnozuj();

        System.out.println();

        notatka notatka2 = new notatka("Mały Książę", "Opowieść o księciu który kocha róze i znalazł przyjaciela w pustyni");
        notatka2.wyswietl();
        notatka2.diagnozuj();
    }
}