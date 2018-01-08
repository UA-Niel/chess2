//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#include "schaakStuk.h"
<<<<<<< HEAD
#include "game.h"

vector<positie> pion::geldige_zetten(game& g) {
    std::cout << "GAAAAAAAAAY";

    positie currentPositie = this->getCurrentPositie();
    int currentX = currentPositie.getX();
    int currentY = currentPositie.getY();
    vector<positie> v;

    v.push_back(positie(currentX, currentY + 1));

    string test = "";
    //X - 1, Y + 1
    test = positie::intToStr(currentX - 1);
    test += to_string(currentY + 1);
    if (g.schaakStukken.count(test) > 0)
        v.push_back(positie(currentX - 1, currentY + 1));
    //X + 1, Y + 1
    test = positie::intToStr(currentX + 1);
    test += to_string(currentY + 1);
    if (g.schaakStukken.count(test) > 0)
        v.push_back(positie(currentX + 1, currentY + 1));
    //X - 1, Y - 1
    test = positie::intToStr(currentX - 1);
    test += to_string(currentY - 1);
    if (g.schaakStukken.count(test) > 0)
        v.push_back(positie(currentX - 1, currentY - 1));
    //X + 1, Y - 1
    test = positie::intToStr(currentX + 1);
    test += to_string(currentY - 1);
    if (g.schaakStukken.count(test) > 0)
        v.push_back(positie(currentX + 1, currentY - 1));

    return v;
}

vector<positie> toren::geldige_zetten(game& g) {};
vector<positie> paard::geldige_zetten(game& g) {};
vector<positie> loper::geldige_zetten(game& g) {};
vector<positie> koning::geldige_zetten(game& g) {};
vector<positie> koningin::geldige_zetten(game& g) {};
=======

>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
