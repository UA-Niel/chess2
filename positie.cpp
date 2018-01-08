//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#include "positie.h"
#include <cstdlib>


ostream& operator<<(ostream& s,positie p)
{ return s;}

positie::positie(int kolom, int row) {
    this->row = row;
    this->kolom = kolom;
}
positie::positie(string s) {
    positie(
            (this->charToInt(s[0])),
            (s[1])
    );
<<<<<<< HEAD


=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
}


int positie::charToInt(char c) {
    string characters = "abcdefgh";

    for (int i = 0; i < characters.length(); i++) {
<<<<<<< HEAD
        if (c == characters[i]) return i;
    }

    return -1;
}

string positie::intToStr(int i) {
    return string(1, "abcdefgh"[i]);
=======
        if (c == characters[i])
            return ++i;

        return -1;
    }
}

string positie::intToStr(int i) {
    return to_string("abcdefgh"[i - 1]);
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
}

string positie::str() {
    string partOne = this->intToStr(this->kolom);
    string partTwo = to_string(this->row);

    return partOne + partTwo;
}
<<<<<<< HEAD

positie::positie() {
    this->kolom = 0;
    this->row = 0;
}

int positie::getX() {
    return this->kolom;
}
int positie::getY() {
    return this->row;
}
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
