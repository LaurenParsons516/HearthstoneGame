#include <string>

using namespace std;

class Card
{
    private:
        string name;
        string type;
        int mana_cost;
        int attack;
        int health;
    
    public:
        Card(string name, string type, int mana_cost, int attack, int health);
        void display();
        int getHealth();
};