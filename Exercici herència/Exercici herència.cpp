/*BUILDINGS OF ROME:
1. Implement the class Building with the string name as protected member, a constructor that receives a string name and a public method getName() that returns the name of the building.

2. Implement the class Warehouse derived from Building that contains:
    2.1 The members wood, rocks and wheat (integers) that cannot be accessed from outside the class.
    2.2 A constructor that receives a string name, and three integers (wood, rocks and wheat).
    2.3 A public method printResources() that prints on the screen the value of the members of the class (in the same way as it can be seen in the screenshot of the next page).

3. Implement the class House derived from Building that contains:
    3.1 The members floors, inhabitants and servants (integers) that cannot be accessed from outside the class.
    3.2 A constructor that receives a string name, and three integers (floors, inhabitants and servants).
    3.3 A public method printHouse() that prints on the screen the value of the members of the class.

4. Implement the class Temple derived from Building that contains:
    4.1 The members god (string) and priests (integer) that cannot be accessed from outside the class.
    4.2 A constructor that receives a string name, a string god and the number of priests of the temple (an integer called priest).
    4.3 A public method printTemple() that prints on the screen the value of the members of the class.

5. Your program must create one of each class and use their print function to display the data*/

#include <iostream>
using namespace std;

class Building 
{
protected:
    string name;
public:
    Building() {}
    Building(string _n) 
    {
        name = _n;
    }
    string getName() 
    {
        return name;
    }
};

class Warehouse : public Building 
{
private:
    int wood;
    int rocks;
    int wheat;
public:
    Warehouse(string _n, int _w, int _r, int _wh) : Building(_n) 
    {
        wood = _w;
        rocks = _r;
        wheat = _wh;
    }
    void printResources() 
    {
        cout << "Warehouse name: " << getName() << endl;
        cout << "Wood: " << wood << endl;
        cout << "Rocks: " << rocks << endl;
        cout << "Wheat: " << wheat << endl;
    }
};

class House : public Building 
{
private:
    int floors;
    int inhabitants;
    int servants;
public:
    House(string _n, int _f, int _i, int _s) : Building(_n) 
    {
        floors = _f;
        inhabitants = _i;
        servants = _s;
    }
    void printHouse() 
    {
        cout << "House name: " << getName() << endl;
        cout << "Floors: " << floors << endl;
        cout << "Inhabitants: " << inhabitants << endl;
        cout << "Servants: " << servants << endl;
    }
};

class Temple : public Building 
{
private:
    string god;
    int priests;
public:
    Temple(string _n, string _g, int _p) : Building(_n) 
    {
        god = _g;
        priests = _p;
    }
    void printTemple() {
        cout << "Temple name: " << getName() << endl;
        cout << "God: " << god << endl;
        cout << "Priests: " << priests << endl;
    }
};

int main() 
{
    Warehouse warehouse("Central Warehouse", 150, 300, 200);
    House house("Roman Villa", 3, 10, 2);
    Temple temple("Temple of Jupiter", "Jupiter", 5);

    warehouse.printResources();
    cout << endl;
    house.printHouse();
    cout << endl;
    temple.printTemple();
}
