//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#ifndef SCHAKEN_GAME_H
#define SCHAKEN_GAME_H

#include "schaakStuk.h"
<<<<<<< HEAD
#include <map>

class positie;

class game {
// variabelen om de status van het spel/bord te bewaren

public:
=======
#include "positie.h"
#include "chessboard.h"
#include <map>

class positie;
// variabelen om de status van het spel/bord te bewaren
extern map<string, schaakStuk*> schaakStukken;

class game {
public:


>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
    game();
    ~game();

    bool move(schaakStuk*,positie);

    bool schaak(zw kleur);
    bool schaakmat(zw kleur);
    bool pat(zw kleur);
    void setStartBord();
<<<<<<< HEAD
    positie mapChessToPosition(schaakStuk* s);

    std::map<std::string, schaakStuk *> schaakStukken;
=======

private:
    positie mapChessToPosition(schaakStuk* s);
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};


#endif //SCHAKEN_GAME_H
