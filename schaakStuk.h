//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#ifndef SCHAKEN_SCHAAKSTUK_H
#define SCHAKEN_SCHAAKSTUK_H
#include <chessboard.h>
<<<<<<< HEAD
#include <vector>
#include "positie.h"
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc

class game;

enum zw{zwart,wit};

class schaakStuk {
public:
    schaakStuk(zw kleur): kleur(kleur) {}

    virtual Piece piece() const=0;      // Deze functie krijg je cadeau
                                        // Je hebt die nodig om het stuk in de
                                        // GUI te tekenen
                                        // Meer info: kijk naar mainwindow.cpp, lijn 24

    zw getKleur() const { return kleur; }
<<<<<<< HEAD

    positie currentPositie;
    void setCurrentPositie(const positie& currentPositie) {
        this->currentPositie = currentPositie;
    }
    positie& getCurrentPositie() {
        return this->currentPositie;
    }

    virtual vector<positie> geldige_zetten(game& g) = 0;


=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
private:
    zw kleur;
};

class pion:public schaakStuk {
public:
    pion(zw kleur):schaakStuk(kleur) {}
    virtual Piece piece() const override {
        return Piece(Piece::Pawn,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);


=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

class toren:public schaakStuk {
public:
    toren(zw kleur):schaakStuk(kleur) {}

    Piece piece() const override {
        return Piece(Piece::Rook,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

class paard:public schaakStuk {
public:
    paard(zw kleur):schaakStuk(kleur) {}

    Piece piece() const override {
        return Piece(Piece::Knight,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

class loper:public schaakStuk {
public:
    loper(zw kleur):schaakStuk(kleur) {}

    Piece piece() const override {
        return Piece(Piece::Bishop,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

class koning:public schaakStuk {
public:
    koning(zw kleur):schaakStuk(kleur) {}

    Piece piece() const override {
        return Piece(Piece::King,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

class koningin:public schaakStuk {
public:
    koningin(zw kleur):schaakStuk(kleur) {}

    Piece piece() const override {
        return Piece(Piece::Queen,getKleur()==wit?Piece::White:Piece::Black);
    }
<<<<<<< HEAD

protected:
    //Geldige posities
    vector<positie> geldige_zetten(game& g);
=======
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
};

#endif //SCHAKEN_SCHAAKSTUK_H
