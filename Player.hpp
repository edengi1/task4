#pragma once
#include "Player.hpp"
#include"City.hpp"
#include"Color.hpp"
#include"Board.hpp"
#include <iostream>
#include <string>
#include <map>

namespace pandemic 
{
  class Player
  {
    public:

      Player(Board& b, City c);

      Player();   

      ~Player();

      virtual Player& fly_direct(const City& c);

      virtual Player& fly_shuttle(const City& c);

      virtual Player& fly_charter(const City& c);

      virtual Player& drive(const City& c);

      virtual Player& build();

      virtual Player& discover_cure(const Color& c);

      virtual Player& treat(const City& c);

      virtual Player& take_card(const City& c);

      virtual Player& remove_charter(const City& c);

      virtual Player& remove_shuttle(const City& c);

      virtual std::string role(const City& c);
      
      virtual std::string role();
      
    };
}
