
#include "colisions.hpp"

Colisions::Colisions() {}
Colisions::~Colisions()
{
    rects.clear();
}

void Colisions::addColision(const sf::FloatRect& colision)
{
    rects.push_back(colision);
}

void Colisions::clearColisions()
{
    rects.clear();
}

unsigned int Colisions::getNumColisions()
{
    return rects.size();
}

std::vector<sf::FloatRect> Colisions::getColisions()
{
    return rects;
}

sf::FloatRect Colisions::getColision(unsigned int num)
{
    if(num >= rects.size())
    {
        return sf::FloatRect(0, 0, 0, 0);
    }
    else
    {
        return rects[num];
    }
}