#include "Card.hpp"
#include "URL.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "json.hpp"


using json = nlohmann::json;
using namespace std;

void insertion_sort(std::vector<Card*> & vec)
{
    for(std::size_t j = 1; j < vec.size(); j++)
    {
      Card* key = vec[j];
      int i = j-1;

      while(i >= 0 && vec[i]->getHealth() > key->getHealth())
      {
         vec[i+1] = vec[i];
         i--;
      }
      
      vec[i+1] = key;
    }
}


int main(int argc, char **argv)
{
    URL *u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    string jsonString = u1->getContents();
    json parsedJson = json::parse(jsonString);
    vector<Card*> minions = {}; 

    if (parsedJson.is_array())
    {
        for (int i = 0; i < parsedJson.size(); i++)
        {
            json currValue = parsedJson[i];
            if (currValue.is_object())
            {
                string name = currValue.value("name", "N/A");
                string type = currValue.value("type", "N/A");
                int attack = currValue.value("attack", -1);
                int health = currValue.value("health", -1);
                int manaCost = currValue.value("cost", -1);
                
                
                if (type == "MINION")
                {
                    minions.push_back(new Card(name, type, manaCost, attack, health));
                }
            }
        }
    }

    insertion_sort(minions);
    for (int i = 0; i < minions.size(); i++)
    {
        minions[i]->display();
    }

    cout << "Number of Minions: " << minions.size() << endl;
    return 0;
}

