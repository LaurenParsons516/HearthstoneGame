#include "url.cpp"

int main() {
    URL test = URL("http://google.com/");
    std::cout << test.getContents() << std::endl;
}