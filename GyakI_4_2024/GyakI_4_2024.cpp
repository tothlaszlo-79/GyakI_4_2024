#include <iostream>

using namespace std;

struct ember {
	char nev[25];
	int magassasg;
	float suly;
};


int main()
{

	//1. feladat
	/*char k, nagy, kicsi;
	cout << "Adjon meg egy tetszoleges betut: ";
	cin >> k;
	kicsi = tolower(k);
	nagy = toupper(k);
	cout << "A megadott karakter kisbetus alakja: " << kicsi <<
		" es a nagybetus alakja: " << nagy << endl;*/

	//2.feladat

	/*char k;
	int x, y;

	cout << "Adjon meg egy tetszoleges karaktert: ";
	cin >> k;
	x = isalpha(k);
	y = isdigit(k);
	if (x != 0) cout << " A megadott karakter betu!" << endl;
	else {
		if (y != 0)	cout << " A megadott karakter szam!" << endl;
		else
			cout << "A megadott karakter nem betu es nem is szam" << endl;
	}*/

	//3.feladat
	//char nev[25];
	//cout << "Adja meg a nevet ekezetek neklul, vesszovel elvalasztva: ";
	//cin >> nev;
	//cout << "Az on neve: " << nev;
	//cout << endl;
	//4.feladat
	/*char nev[25];
	cout << "Adja meg a nevet ekezetek neklul, szokozzel elvalasztva: ";
	cin.getline(nev, 25);
	cout << "Az on neve: " << nev;
	cout << endl;*/

	//5.feladat
	//int i;
	//char nev1[25], nev2[25], bet;
	//cout << "Adja meg a nevet ekezetek nelkul: ";
	//cin.getline(nev1, 25);
	//strcpy_s(nev2, nev1); //nev 2 be bemasolja a nev1 tomb erteket
	//cout << "Az On neve: " << nev2 << endl;
	//cout << "A nevenek hossza szokozokkel: " << strlen(nev1) << endl;
	//
	//for ( i = 0; i < strlen(nev2); i++)
	//{
	//	bet = tolower(nev2[i]);
	//	cout << bet;
	//}	
	//cout << endl;
	//for (i = 0; i < strlen(nev2); i++)
	//{
	//	bet = toupper(nev2[i]);
	//	cout << bet;
	//}
	//cout << endl;
	//if (strcmp(nev1, nev2) == 0) { cout << "Egyforma szovegek" << endl; }
	//else { cout << "Nem egyforma szovegek" << endl;}

	ember gyerek[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Adja meg a "<< i+1 <<" gyerek nevet : " << endl;
		cin.getline(gyerek[i].nev, 25);
		cout << "Adja meg a" << i + 1 << " gyerek magassagat cm-ben:" << endl;
		cin >> gyerek[i].magassasg;
		cout << "Adja meg a" << i + 1 << " gyerek sulyat kg ban: " << endl;
		cin >> gyerek[i].suly;
	}
	
	for (int i = 0; i < 5; i++)
	{
		cout << "A gyerek adatai a kovetkezoek:" << endl;
		cout << gyerek[i].nev << " - " << gyerek[i].magassasg << " cm es " <<
			gyerek[i].suly << " kg" << endl;
	}
	

	system("pause");
	return 0;
}
