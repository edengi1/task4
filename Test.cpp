#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "doctest.h"
#include "Researcher.hpp"

#include <iostream>
#include <stdexcept>
#include <string>
#include <map>
#include <vector>
#include <fstream>

using namespace pandemic;

TEST_CASE("Test 1")
{

Board board;

cout << boolalpha;

OperationsExpert player {board, City::Paris};

    player.take_card(City::Delhi);

	player.take_card(City::Beijing);

	player.take_card(City::Tokyo);

	player.take_card(City::HongKong);
	
	
	CHECK_NOTHROW(player.fly_direct(City::Delhi));

    CHECK_NOTHROW(player.build());

    CHECK_NOTHROW(player.fly_direct(City::Beijing));

    CHECK_NOTHROW(player.build());

    CHECK_NOTHROW(player.fly_shuttle(City::Delhi));

    CHECK_NOTHROW(player.fly_direct(City::Tokyo));

    CHECK_NOTHROW(player.build());

    CHECK_NOTHROW(player.fly_direct(City::HongKong));

    CHECK_NOTHROW(player.build());
}	

TEST_CASE("Test 2")
{
    Board board;
    cout << boolalpha;
    
    Medic player {board, City::Paris};

    player.take_card(City::Delhi);

	player.take_card(City::Beijing);

	player.take_card(City::Tokyo);

	player.take_card(City::HongKong);
 	
    CHECK_NOTHROW(player.fly_direct(City::HongKong));

    player.take_card(City::HongKong);

    CHECK_NOTHROW(player.build());

	CHECK_NOTHROW(player.fly_direct(City::Tokyo));

    player.take_card(City::Tokyo);

    CHECK_NOTHROW(player.build());
    
	CHECK_NOTHROW(player.fly_direct(City::Delhi));

    CHECK_NOTHROW(player.build());

    CHECK_NOTHROW(player.fly_direct(City::Beijing));

    player.take_card(City::Beijing);

    CHECK_NOTHROW(player.build());

    CHECK_NOTHROW(player.fly_shuttle(City::HongKong));

}
	 
TEST_CASE("Test 3")
{
    Board board;

    cout << boolalpha;
    
    Virologist player {board, City::Paris};  

    player.take_card(City::HongKong);

	player.take_card(City::Delhi); 

	player.take_card(City::Tokyo);

	player.take_card(City::Beijing);

	CHECK_NOTHROW(player.fly_charter(City::Paris));
    
	CHECK_NOTHROW(player.fly_charter(City::HongKong));

	CHECK_NOTHROW(player.fly_charter(City::Delhi));

    CHECK_NOTHROW(player.fly_charter(City::Tokyo));

	CHECK_NOTHROW(player.fly_charter(City::Beijing));

}