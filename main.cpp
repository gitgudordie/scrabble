#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
int koncowyWynik = 0;

std::string dostepneLitery = { 'A',
                               'A',
                               'A',
                               'A',
                               'A'
                               ,'A'
                               ,'A'
                               ,'A'
                               ,'A'
                               ,'B'
                               ,'B'
                               ,'C'
                               ,'C'
                               ,'C'
                               ,'D'
                               ,'D'
                               ,'D'
                               ,'E'
                               ,'E'
                               ,'E'
                               ,'E'
                               ,'E'
                               ,'E'
                               ,'E'
                               ,'F'
                               ,'G'
                               ,'G'
                               ,'H'
                               ,'H'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'I'
                               ,'J'
                               ,'J'
                               ,'K'
                               ,'K'
                               ,'K'
                               ,'L'
                               ,'L'
                               ,'L'
                               ,'M'
                               ,'M'
                               ,'M'
                               ,'N'
                               ,'N'
                               ,'N'
                               ,'O'
                               ,'O'
                               ,'O'
                               ,'O'
                               ,'O'
                               ,'O'
                               ,'P'
                               ,'P'
                               ,'P'
                               ,'R'
                               ,'R'
                               ,'R'
                               ,'R'
                               ,'S'
                               ,'S'
                               ,'S'
                               ,'S'
                               ,'T'
                               ,'T'
                               ,'T'
                               ,'U'
                               ,'U'
                               ,'W'
                               ,'W'
                               ,'W'
                               ,'W'
                               ,'Y'
                               ,'Y'
                               ,'Y'
                               ,'Y'
                               ,'Z'
                               ,'Z'
                               ,'Z'
                               ,'Z'
                               ,'Z'};

char pionPlanszy[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                        'L', 'M', 'N', 'O'};



std::string A[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string B[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string C[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string D[16] {"","_","_", "_", "_", "_", "_",
                    "_", "_", "_", "_", "_",
                    "_","_","_","_"};

std::string E[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string F[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string G[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string H[16] {"","_","_", "_", "_", "_", "_",
                   "_", "*", "_", "_", "_",
                   "_","_","_","_"};

std::string I[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string J[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string K[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string L[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string M[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string N[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

std::string O[16] {"","_","_", "_", "_", "_", "_",
                   "_", "_", "_", "_", "_",
                   "_","_","_","_"};

 int getRandNumber(int max, int min) {
    return rand() % (max - min) + min + 1;
}
std::string rekaGracza;
std::string ukladaneSlowo;
int punktacja();

int wynik();                //przypisac punktacje za uzyte litery i zsumowac do globalnego wyniku  - PROSTE JAK DOJENIE SWINI
void wyswietlaczPlanszy();
void tworzenieSlowa();      //po utworzeniu dobrego slowa trzeba przypisac je odpowiednim polom       - TE DWA GOWNA SA NAJTRUDNIEJSZE
void losowanieLiter();
void ponowneLosowanieLiter();
void dopelnianieReki();     //napisac metode, ktora bedzie autouzupelniala litery w rece. UWAGA! uzyte litery nie moga sie powtorzyc! - W MIARE IZI
void tura();                //wymyslec jakis dobry sposob na przeprowadzenie tury   - W MIARE IZI
void checkWord();           //wczytac plik tekstowy i porownywac ukladaneSlowo z slowami ktore sa juz predefiniowane w DICTIONARY.txt  - CHYBA IZI
void pierwszeSlowo();       //pierwsze slowo musi zaczynac sie od od gwiazdki

int punktacja (std::string slowo)                                                                                                   //to dziala
{

for (int i = 0; i < 14; i++) {
    if (ukladaneSlowo[i] == 'A' || ukladaneSlowo[i] == 'E' || ukladaneSlowo[i] == 'I' || ukladaneSlowo[i] == 'N' || ukladaneSlowo[i] == 'O'
|| ukladaneSlowo[i] == 'R' || ukladaneSlowo[i] == 'S' || ukladaneSlowo[i] == 'W' || ukladaneSlowo[i] == 'Z' || ukladaneSlowo[i] == 'P')
        {
        koncowyWynik += 1;
        return koncowyWynik;
        }

    else if (ukladaneSlowo[i] == 'C' || ukladaneSlowo[i] == 'D' || ukladaneSlowo[i] == 'K' || ukladaneSlowo[i] == 'L'
    || ukladaneSlowo[i] == 'M' || ukladaneSlowo[i] == 'T' || ukladaneSlowo[i] == 'Y')
        {
        koncowyWynik += 2;
        return koncowyWynik;
        }

    else if (ukladaneSlowo[i] == 'B' || ukladaneSlowo[i] == 'G' || ukladaneSlowo[i] == 'H' || ukladaneSlowo[i] == 'J'
    || ukladaneSlowo[i] == 'U')
        {
        koncowyWynik += 3;
        return koncowyWynik;
        }

    else if (ukladaneSlowo[i] == 'F')
        {
        koncowyWynik += 5;
        return koncowyWynik;
        }
    else {
        koncowyWynik += 0;
        }
    }
}

void wyswietlaczPlanszy() {                                                                                             //to w miare dziala

    //wspolrzednie kolumn
    std::cout << "\n  ";
    for (int i = 1; i < 10; i++) {
        std::cout << i << "|";
    }
    for (int i = 0; i < 6; i++) {
        std::cout << i << "|";
    }

    //wspolrzedne wierszy
    std::cout << "\n" << pionPlanszy[0] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << A[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[1] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << B[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[2] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << C[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[3] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << D[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[4] << " ";
    for(int i = 0; i < 15; i++) {
        std::cout << E[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[5] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << F[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[6] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << G[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[7] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << H[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[8] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << I[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[9] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << J[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[10] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << K[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[11] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << L[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[12] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << M[i+1] << "|";
     }

    std::cout << "\n" << pionPlanszy[13] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << N[i+1] << "|";
    }

    std::cout << "\n" << pionPlanszy[14] << " ";
    for (int i = 0; i < 15; i++) {
        std::cout << O[i+1] << "|";
    }
    std::cout << "\n\n\n";
}

void tworzenieSlowa() {                                                                                                 //to gowno nie dziala!!!!
    int input;
    std::cout << "\n\n\nJakie slowo chcesz ulozyc?\nPo kolei wybieraj indeksy liter z reki";

    bool flag = false;

    if (flag == false) {
        for (int i = 0; i < 13; i++) {
            std::cin >> input;
            cout << input;

            string dupa = "dupa";
            for(i=0;i<4;i++){
                cout << dupa[i];
            }

            if (input > 0 && input < 14) {
                for (int j = 0; j < rekaGracza.length(); j++) {
                    cout << "reka gracza input-1 "<< rekaGracza[input-1] << "\n" ;
                    cout << "reka gracza [j] "<< rekaGracza[j] << "\n";

                        if (rekaGracza[input-1] == rekaGracza[j]) {
                            ukladaneSlowo[i] = rekaGracza[j];
                            cout << "Wybrałeś litere: " << ukladaneSlowo[i] << "\n" << "\n";
                            cout << "Ulozone slowo do tej pory: " << ukladaneSlowo << "\n"<< "\n";
                        } else if(input == 100){
                            flag = true;
                        }
                        //to do: mam slowo z 3 liter - czy moge wyjsc i je dac na tablice? W tej wersji chyba nie bo kręce się aż wykorzystam wszystkie
                    }
                    if(flag){
                        cout << ukladaneSlowo;
                        break;
                    }
                cout << "Czy ułożyłeś już słowo ? - jeżeli tak to wcisnij 0";
                }
                std::cout << "Twoje slowo to: " << ukladaneSlowo;
        }
    }
}


//    if (input.length() < 3 || input.length() > 13) {
//        std::cout << "slowo musi miec minimum 3 litery i maksymalnie 13 liter!";
//    } else {
//    for (int scanner = 0; scanner < input.length(); scanner++) {
//        for (int scanner2 = 0; scanner2 < input.length(); scanner2++) {
//            if (rekaGracza[scanner] == input[scanner2] || rekaGracza[scanner2] == input[scanner] || rekaGracza[scanner] == input[scanner] || rekaGracza[scanner2] == input[scanner2]){
//                std::cout << "poprawne slowo";
//                ukladaneSlowo[scanner] = input[scanner];
//            } else
//            {
//                std::cout << "niepoprawne slowo!";
//                break;
//            }
//        }
//        std::cout << "Twoje slowo to: " << ukladaneSlowo[scanner];
//        punktacja(ukladaneSlowo);
//        }
//    }
//}
void uzyteLitery() {

}
void losowanieLiter() {                                                                                                 //to dziala w miare
    for (int i = 0; i < 7; i++)
        {
            int losowaLitera = getRandNumber(86, 1);
            rekaGracza[i] = dostepneLitery[losowaLitera-1];
        }
    std::cout << "\nDostepne litery to:\n";
        for (int i = 0; i < 7; i++) {
            std::cout << rekaGracza[i] << " ";
        }
        std::cout << "\n";
    for (int i = 1; i <= 7; i++) {
        std::cout  << i << " ";
    }
    for (int i = 0; i < 7; i++) {
        if (rekaGracza[i] == 'A' || rekaGracza[i] == 'E' || rekaGracza[i] == 'I' || rekaGracza[i] == 'N' ||
            rekaGracza[i] == 'O' || rekaGracza[i] == 'R' || rekaGracza[i] == 'S' || rekaGracza[i] == 'W' || rekaGracza[i] == 'Z') {
            std::cout << "\n" << rekaGracza[i] << " = 1 pkt";
        }
        else if (rekaGracza[i] == 'C' || rekaGracza[i] == 'D' || rekaGracza[i] == 'K' || rekaGracza[i] == 'L'
                   || rekaGracza[i] == 'M' || rekaGracza[i] == 'T' || rekaGracza[i] == 'Y') {
            std::cout << "\n" << rekaGracza[i] << " = 2 pkt";
        }
        else if (rekaGracza[i] == 'B' || rekaGracza[i] == 'G' || rekaGracza[i] == 'H' || rekaGracza[i] == 'J'
                   || rekaGracza[i] == 'U') {
            std::cout << "\n" << rekaGracza[i] << " = 3 pkt";
        }
        else if (rekaGracza[i] == 'F') {
            std::cout << "\n" << rekaGracza[i] << " = 5 pkt";
            }
        }
    }


void umiescSlowo() {

    int wybor1;
    int wybor2;
    int wybor3;

    std::cout << "\nJak chcesz umiescic nowe slowo?\n (1) - w poziomie\n (2) - w pionie";
    std::cin >> wybor1;

    if (wybor1 == 1) {
        std::cout << "\nW ktorym wierszu chcesz umiescic slowo? (1-15)";
        std::cin >> wybor2;

        std::cout << "\nW ktorej kolumnie chcesz umiescic slowo? (1-15)";
        std::cin >> wybor3;
        if (wybor2 == 1)                    //wiersz A
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (A[wybor3 + i] == "_") {
                    A[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }


        } else if (wybor2 == 2)               //wiersz B
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (B[wybor3 + i] == "_") {
                    B[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                        std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                        umiescSlowo();
                    }
            }
        } else if (wybor2 == 3)               //wiersz C
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (C[wybor3 + i] == "_") {
                    C[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 4)               //wiersz D
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (D[wybor3 + i] == "_") {
                    D[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 5)               //wiersz E
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (E[wybor3 + i] == "_") {
                    E[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }
        }

        else if (wybor2 == 6)               //wiersz F
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (G[wybor3 + i] == "_") {
                    F[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 7)               //wiersz G
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (G[wybor3 + i] == "_") {
                    G[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 8)               //wiersz H
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (H[wybor3 + i] == "_") {
                    H[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 9)               //wiersz I
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (I[wybor3 + i] == "_") {
                    I[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 10)               //wiersz J
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (J[wybor3 + i] == "_") {
                    J[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }


        } else if (wybor2 == 11)               //wiersz K
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (K[wybor3 + i] == "_") {
                    K[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 12)               //wiersz L
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (L[wybor3 + i] == "_") {
                    L[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 13)               //wiersz M
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (M[wybor3 + i] == "_") {
                    M[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 14)               //wiersz N
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (N[wybor3 + i] == "_") {
                    N[wybor3 + i] = ukladaneSlowo[i];
                    ukladaneSlowo[i] = 0;
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }

        } else if (wybor2 == 15)               //wiersz O
        {
            for (int i = 0; i < ukladaneSlowo.length(); i++) {
                if (O[wybor3 + i] == "_") {
                    O[wybor3 + i] = ukladaneSlowo[i];
                    wyswietlaczPlanszy();
                } else {
                    std::cout << "Nie mozesz tu ustawic nowego wyrazu!";
                    umiescSlowo();
                }
            }
        }

    } else if (wybor1 == 2) {
        std::cout << "\nW której kolumnie chcesz umiescic slowo? (1-15)";
        std::cin >> wybor2;

        std::cout << "\nW którym wierszu chcesz umiescic slowo? (1-15)";
        std::cin >> wybor3;

    }
}


void tura() {
    int wybor;
    std::cout << "\n (1) - Umiesc nowe slowo na planszy\n (2) - Dobierz litere\n (3) - Zakoncz gre";
    std::cin >> wybor;

    switch(wybor) {
        case 1:
            tworzenieSlowa();
            umiescSlowo();
            //dobieranie plytki
            //case 2:
            ;


        case 3:
            std::cout << "Brawo, udalo Ci sie zdobyc: "<< koncowyWynik << " punktow!";
            break;

    }
}

void checkWord()
{

}

//int wynik(int sum)
//{

//}

void ponowneLosowanieLiter()
{
    if (sizeof(rekaGracza)/sizeof(rekaGracza[0]) < 7) {
        int i = 7 - sizeof(rekaGracza)/sizeof(rekaGracza[0]);
        for (int j = 0; j < i; j++) {
            rekaGracza[j] = getRandNumber(sizeof(dostepneLitery)/sizeof(dostepneLitery[0]), 1);
        }
    }

}

int main() {
    int flag = 0;
    std::cout <<
              "Witaj w jednoosobowej wersji gry Scrabble!" << "\n"<< "\n"
              "Aby zaczac nowa gre wybierz '1'" << "\n"<< "\n"
              "Aby wyjsc wybierz '2'" << "\n" << "\n";

    while (flag != 1) {
    int scanner;
    std::cin >> scanner;
    if (scanner == 1) {
        srand(time(NULL));
        wyswietlaczPlanszy();
        losowanieLiter();
        tura();
    } else if (scanner == 2) {
        std::cout << "Do zobaczenia!";
        flag = 1;
        }
    else
    {
        std::cout << "Zly wybor!\n";
        main();
    }
    }
}