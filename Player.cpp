#include"City.hpp"
#include"Color.hpp"
#include"Board.hpp"
#include"Player.hpp"
#include <iostream>
#include <string>
#include <map>


namespace pandemic 
{
     Player::Player()
     {

     }

     Player::~Player()
     {
          
     }

     Player::Player(Board&, City)
     {

     }

     Player& Player::fly_direct(const City& c)
     {
          return *this;
     }

     Player& Player::fly_shuttle(const City& c)
     {
          return *this;
     }

     Player& Player::fly_charter(const City& c)
     {
      return *this;
     }
      
     Player& Player::drive(const City& c)
     {
          return *this;
     }

     Player& Player::build()
     {
     return *this;
     }

     Player& Player::discover_cure(const Color& c)
     {
     return *this;
     }

     Player& Player::treat(const City& c)
     {
     return *this;
     }

     Player& Player::take_card(const City& c)
     {
     return *this;
     }

     Player& Player::remove_charter(const City& c)
     {
     return *this;
     }

     Player& Player::remove_shuttle(const City& c)
     {
     return *this;
     }

     string Player::role(const City& c)
     {
     return "";
     }

     string Player::role()
     {
     return "";
     }

};
