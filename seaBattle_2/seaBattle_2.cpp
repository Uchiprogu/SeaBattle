// seaBattle_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"
#include <iostream>

int main()
{
	SeaBattle k;
	k.showMap();
	k.setShips_Player();
	k.Shot();
	k.whowin();
    return 0;
}

