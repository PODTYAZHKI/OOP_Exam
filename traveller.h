#ifndef TRAVELLER_H
#define TRAVELLER_H

#include <iostream>

template <typename T>
class Traveller
{
private:
    typedef struct
    {
        int x;
        int y;
    } CoordXY;
public:
    Traveller();
    ~Traveller();
    Traveller(const Traveller *t);
    std::string getName() const;
    std::string getType() const;
    CoordXY getLocation();
};



#endif // TRAVELLER_H
