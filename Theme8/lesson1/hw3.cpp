#include <iostream>
#include <string>

using namespace std;

// Мобы
class BaseMob
{
protected:
    string mobType;
    int health;
    int damage;
public:
    string getMobType()
    {
        return mobType;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    int getDamage()
    {
        return damage;
    }
};

class Zombi : public BaseMob
{
public: 
    Zombi()
    {
        mobType = "zombi";
        health = 100;
        damage = 10;
    }
};

class Skelet : public BaseMob
{
public: 
    Skelet()
    {
        mobType = "skelet";
        health = 120;
        damage = 15;
    }
};

class Criper : public BaseMob
{
public: 
    Criper()
    {
        mobType = "criper";
        health = 80;
        damage = 100;
    }
};

// Персонаж
class Player
{
private:
    int health = 100;
    int damage = 10;
    int position[2] = {0, 0};
    string weapon = "";

    void showDamageByMob(string mobType, int dmg)
    {
        cout << "Вы ударили " + mobType + " на " + to_string(dmg) + " урона!" << endl;
    }

public:
    int onHit(string mobType)
    {
        if (weapon == "sword")
        {
            int dmg = damage + 10;
            showDamageByMob(mobType, dmg);
            return dmg;
        }
        else if (weapon == "axe")
        {
            int dmg = damage + 8;
            showDamageByMob(mobType, dmg);
            return dmg;
        } 
        else if (weapon == "shovel")
        {
            int dmg = damage + 5;
            showDamageByMob(mobType, dmg);
            return dmg;
        } 
        else
        {
            showDamageByMob(mobType, damage);
            return damage;
        }
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void onMove(int x, int y)
    {
        position[0] = x;
        position[1] = y;
    }

    void setWeapon(string w)
    {
        weapon = w;
    }
};

// Мир
class World
{
private:
    int chunks;
    int spawnPosition[2] = {0, 0};
    Player player;
public:
    void create(int ch, Player pl)
    {
        chunks = ch;
        player = pl;
    }

    int* getSpawnPosition()
    {
        return spawnPosition;
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");
    World world;
    Player player;
    Zombi zombi;

    // Тип нажалии данную кнопку
    char keyPressed = 'W';

    world.create(100, player);

    if (keyPressed == 'W')
    {
        player.onMove(1, 0);
        // Тип нашли оружие
        player.setWeapon("axe");
        // И ударили противника
        player.onHit(zombi.getMobType());
    }

    return 0;
}