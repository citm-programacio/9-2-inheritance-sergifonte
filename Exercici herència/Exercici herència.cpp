/*BUILDINGS OF ROME:
1. Implement the class Building with the string name as protected member, a constructor that receives a string name and a public method getName() that returns the name of the building.

2. Implement the class Warehouse derived from Building that contains:
    2.1 The members wood, rocks and wheat (integers) that cannot be accessed from outside the class
    2.2 A constructor that receives a string name, and three integers (wood, rocks and wheat).
    2.3 A public method printResources() that prints on the screen the value of the members of the class (in the same way as it can be seen in the screenshot of the next page).

3. Implement the class House derived from Building that contains:
    3.1 The members floors, inhabitants and servants (integers) that cannot be accessed from outside the class
    3.2 A constructor that receives a string name, and three integers (floors, inhabitants and servants).
    3.3 A public method printHouse() that prints on the screen the value of the members of the class.

4. Implement the class Temple derived from Building that contains:
    4.1 The members god (string) and priests (integer) that cannot be accessed from outside the class
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
    Building(string _n)
    {
        name = _n;
    }
    string getName()
    {
        return name;
    }
};

class Warehouse : Building
{

};

int main()
{
    std::cout << "Hello World!\n";
}