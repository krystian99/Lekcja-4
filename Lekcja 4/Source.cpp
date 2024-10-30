#include <iostream>

using namespace std;

int main()
{
	/*
	int ile = 0;
	cout << "Licznik wynosi: " << ile << endl;
	ile++;
	cout << "Licznik wynosi: " << ile << endl;
	ile++;
	cout << "Licznik wynosi: " << ile << endl;
	*/

	int t;
	cin >> t;

	while (t--)
	{
		int szukana, n;
		cin >> n >> szukana;

        int liczba, ile = 0;

		/*
		cin >> liczba;
		for (int i = 0; i < n; ++i)
		{
			if (liczba == szukana)
			{
				ile++;
			}
		}
		*/
        for(int i=0; i<n; ++i)
        {
            cin>>liczba;
            if(liczba==szukana)
            {
                ++ile;
            }
        }
        cout<< ile << endl;
	}

	return 0;
}