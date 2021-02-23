#include "url.cpp"

std::string parse(std::string jsonString) {

    std::string parsedJsonString = "";
    int counter = 0;

    for (char c : jsonString) {
        if (c == '[') {
            counter++;
        } else if (c == ']') {
            counter--;
        }

        if (counter == 0) {
            break;
        } else {
            if (counter == 1 && c == '[') {
                continue;
            }
            parsedJsonString = parsedJsonString + c;
        }
    } 
    return parsedJsonString;
}

int main() {
    //URL cards = URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    //std::string jsonString = cards.getContents();

    std::string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";

    std::string jString = parse(jsonString);
    std::cout << jString << std::endl;

    return 0;
}
