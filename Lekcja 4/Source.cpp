#include <iostream>
#include <cmath> // biblioteka funkcji matematycznych

using namespace std;

int main()
{
    int n, t;
    int tab[99];
    cin >> t;

    while (t--)
    {
        int s = 0;

        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> tab[i];
        for (int i = 0; i < n; ++i) // zsumuj wszystkie elementy tablicy
            s += tab[i];

        double srednia; // double - liczby zmiennoprzecinkowe
        //double srednia2;

        srednia = double(s) / 4;
        //srednia2 = s / 4;

        //cout << "Srednia1: " << srednia << endl;
        //cout << "Srednia2: " << srednia2 << endl;

        double min = abs(srednia - tab[0]); // ustawiamy minimalna odlegosc na odleglosc od pierwszego elementu tablicy
        int indeks_min = 0; // wartosc indeksu tablicy dla najmniejszej odleglosci

        for (int i = 1; i < n; ++i)
        {
            double odleglosc = abs(srednia - tab[i]);

            if (odleglosc < min) // jezeli odleglosc od tego elementu tablicy(indeks i) bedzie mniejsza, to zmien wartosc minimalna
            {
                min = odleglosc;
                indeks_min = i;
            }
        }
        cout << tab[indeks_min] << endl;
    }


    return 0;
}