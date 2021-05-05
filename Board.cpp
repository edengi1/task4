#include"City.hpp"
#include"Board.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace pandemic 
{

static map<pandemic::City, int> col_map;

int n=1;
    
    Board::Board(City &c)
    {
    }; 

    Board::Board()
    { 
    };

    bool Board::is_clean()
    {
        return true;
    }
     
    int&  Board::operator [] ( City c)
    {
        return n;
    }
    
    void  Board::remove_cures()
    {
    }

    ostream& operator << (ostream &out, const Board &b)
   {
       return out;
   }

    };
