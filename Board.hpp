#include <string>
#include <map>
#include <iostream>
#include"City.hpp"
#pragma once

namespace pandemic 
{

    class Board
    {
        map<pandemic::City, int> col_map;

    public:

    Board(City &c);
    Board();

    bool  is_clean();  
    int&  operator [] (City c);
    void  remove_cures();
    friend std::ostream &operator << (std::ostream&, const Board&);
    
    
    };
};

