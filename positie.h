//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#ifndef SCHAKEN_POSITIE_H
#define SCHAKEN_POSITIE_H

#include <iostream>
using namespace std;

class positie {
public:
    positie(int kolom, int row);
    positie(string s);
    positie();
    string str();
    static int charToInt(char c);

<<<<<<< HEAD
    int getX(void);
    int getY(void);

    static string intToStr(int i);

=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
protected:
    int kolom = 0;
    int row = 0;

<<<<<<< HEAD
=======
private:
    string intToStr(int i);
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

// Eventueel kan je volgende operator definieren
// dan kan je makkelijk cout << p; doen van een
// positie p
ostream& operator<<(ostream& s,positie p);



#endif //SCHAKEN_POSITIE_H
