#include <iostream>
#include <string>
using namespace std;
///struct Node{};
///class Cat{};
struct Node
{
    int val;
};
class Cat
{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
}
