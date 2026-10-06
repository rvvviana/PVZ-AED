#include "Plant.h"
using namespace std;

Plant::Plant(string name, int hp, int x, int y, int cost)
    : Entity(name, hp, x, y), cost(cost) {}

int Plant::getCost() const { return cost; }

void Plant::action() {
    cout << name << " faz alguma acao base.\n";
}

Peashooter::Peashooter(int x, int y) 
    : Plant("Peashooter", 100, x, y, 100) {}

void Peashooter::action() {
    cout << "Peashooter em (" << x << "," << y << ") atira uma ervilha!\n";
}

Sunflower::Sunflower(int x, int y) 
    : Plant("Sunflower", 100, x, y, 50) {}

void Sunflower::action() {
    cout << "Sunflower em (" << x << "," << y << ") produz sol!\n";
}
