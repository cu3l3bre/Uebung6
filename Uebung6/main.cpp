#include <iostream>

using namespace std;



void ZeigeInhaltArray(int array[], int Groesse)
{
	for (int i = 0; i < Groesse; i++)
		cout << array[i] << endl;
}




// TODO keine Ahnung 
void ZeigeInhaltMultArray(int (*array)[10][10])
{

}




int main()
{
	cout << "Programm zu Uebung6" << endl;


	// Aufgabe 1 und 2

	const int AnzahlZahlen = 100;
	int Array[AnzahlZahlen] = { };
	int Summe = 0;

	for (int i = 0; i < AnzahlZahlen; i++)
	{
		Array[i] = i + 1;
		Summe = Summe + Array[i];
	}

	cout << "Die Summe ist: " << Summe << endl;

	// Aufgabe 3
	const int AnzahlUserZahlen = 5;
	int ArrayUser[AnzahlUserZahlen] = {};
	int SummeUser = 0;

	cout << "Bitte geben Sie nachfolgend " << AnzahlUserZahlen << " Zahlen ein!" << endl;

	for(int i=0; i<AnzahlUserZahlen; i++)
	{
		cout << "Bitte die " << i + 1 << ". Zahl eingeben: ";
		cin >> ArrayUser[i];
		SummeUser = SummeUser + ArrayUser[i];
	}

	cout << "Die haben die Zahlen ";

	for (int i = 0; i<AnzahlUserZahlen; i++)
	{
		cout << ArrayUser[i] << " ";
	}
	cout << "eingegeben" << endl;
	cout << "Die Summe daraus lautet: " << SummeUser << endl << endl;


	// Aufgabe 4

	// Bei Irgendwas hier drueber gibts nen Stack Overflow
	// 256000 Elemente von int mit jeweils 4 Byte
	// dh 256000 * 4  = 1024000 Bytes = 1024 MBytes

	//int Overflow[256'000];




	// Aufgabe 5

	cout << "Die Zahlen von 1 bis 100" << endl;

	for (int i = 0; i < AnzahlZahlen; i++)
	{
		if (Array[i] <= 9)
		{
			cout << "00" << Array[i] << " ";
		}
		else if (Array[i] <= 99)
		{
			cout << "0" << Array[i] << " ";
		}
		else
		{
			cout << Array[i] << " ";
		}

		if (!(Array[i] % 10))
		{
			cout << endl;
		}

	}
	cout << endl;

	// Aufgabe 6 


	cout << "Das kleine Ein Mal Eins " << endl;
	int EinmalEins[10][10] = {};

	for (int Col = 0; Col < 10; Col++)
	{
		for (int Row = 0; Row < 10; Row++)
		{
			EinmalEins[Row][Col] = (Row+1)*(Col+1);

			cout << EinmalEins[Row][Col] << " ";
		}
		cout << endl;
	}

	cout << endl;




	// Fortgeschritten

	cout << "Ausgabe der ZeigeArray Funktion" << endl;
	ZeigeInhaltArray(Array,AnzahlZahlen);




	// TODO Wie macht man das mit den mutlti dim Arrays einer Funktion zu übergeben
	int Spalten = 10;
	int Zeilen = 10;

	//EinmalEins
	//ZeigeInhaltMultArray(EinmalEins[Zeilen], Zeilen, Spalten);



	cout << EinmalEins << endl;

	cout << &EinmalEins[0][0] << endl;
	cout << &EinmalEins[0][1] << endl;
	cout << &EinmalEins[0][2] << endl;

	cout << &EinmalEins[0][9] << endl;
	cout << &EinmalEins[1][0] << endl;
	cout << &EinmalEins[1][1] << endl;
	cout << &EinmalEins[1][2] << endl;

	cout << &EinmalEins[1][9] << endl;
	cout << &EinmalEins[2][0] << endl;

	cout << &EinmalEins[2][9] << endl;
	cout << &EinmalEins[3][0] << endl;

	cout << &EinmalEins[8][9] << endl;
	cout << &EinmalEins[9][0] << endl;



	system("pause");
	return 0;
}


