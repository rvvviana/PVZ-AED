#ifndef PLANT_H
#define PLANT_H

#include "Entity.h"
#include <iostream>
using namespace std;

// Herança
class Plant : public Entity {
protected:
    int cost;
public:
    Plant(string name, int hp, int x, int y, int cost);
    int getCost() const;
    void action() override;
};

// Tipos de Plantas
class Peashooter : public Plant {
public:
    Peashooter(int x, int y);
    void action() override;
};

class Sunflower : public Plant {
public:
    Sunflower(int x, int y);
    void action() override;
};

#endif
