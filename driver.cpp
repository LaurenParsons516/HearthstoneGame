#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 8, 8, 8);
    //(*KingKrush).display();
    KingKrush->display();
    Card* PortalKeeper = new Card("Portal Keeper", 4, 5, 2);
    PortalKeeper->display();
    Card* HeroicInkeeper = new Card("Heroic Inkeeper", 8, 4, 4);
    HeroicInkeeper->display();
    Card* ElectricScribe = new Card("Electric Scribe", 6, 6, 4);
    ElectricScribe->display();
}