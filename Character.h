#ifndef Character_h
#define Character_h

#include "GameObject.h"
#include <iostream>
#include <string>

class Character:public GameObject{
protected:
    int health, attack, defense;
    double accuracy;
    int gold;
public:
    Character(int x, int y, char symbol, Floor *grid,int health, int attack, int defense, double accuracy, int gold = 0);
    int getHP() override;
    int getAtk() override;
    int getDef() override;
    int getgold() override;
    void setHP(int hp) override;
    void setAtk(int at) override;
    void setDef(int def) override;
    void setgold(int g) override;
    void shift(std::string dir);
    virtual std::string getRace() = 0;
    virtual bool getMerchantHostile() = 0;
    virtual void setMerchantHostile() = 0;
    void strike(GameObject &c) override;
    void beStruckBy(GameObject &c) override;
    virtual void enemyDeath(GameObject &p) = 0;
   // virtual void playerMove(std::string dir) = 0;
   // virtual void enemyReaction() = 0;
    ~Character();
};

#endif /* Character_h */
