#include "stdafx.h"
#include "Header.h"
#include <Windows.h>
#include <iostream>
#include <ctime>

using namespace std;

int SeaBattle::check_Ships(int  x, int  y, int direction)
{
	int i; //количество палуб
	
		switch (direction)
		{
		case 0:
			if (map_player[x][y + 1] == ship && map_player[x][y - 1] != ship && map_player[x][y + 2] != ship)
			{
				i = 2;			// X H
				return i;
			}
			if (map_player[x][y - 1] == ship && map_player[x][y + 1] != ship && map_player[x][y - 2] != ship)
			{
				i = 2;
				//  H X
				return i;
			}
			if (map_player[x][y + 1] == ship && map_player[x][y - 1] == ship && map_player[x][y - 2] != ship && map_player[x][y + 2] != ship)
			{
				i = 3;			// H X H

				return i;
			}
			if (map_player[x][y + 2] == ship && map_player[x][y + 1] == ship && map_player[x][y - 1] != ship && map_player[x][y + 3] != ship)
			{
				i = 3;			// X H H
				return i;
			}
			if (map_player[x][y - 1] == ship && map_player[x][y - 2] == ship && map_player[x][y - 3] != ship && map_player[x][y + 1] != ship)
			{
				i = 3;			// H H X
				return i;
			}

			if (map_player[x][y - 3] == ship && map_player[x][y - 1] == ship && map_player[x][y - 2] == ship && map_player[x][y - 4] != ship && map_player[x][y + 1] != ship)
			{
				i = 4;			// H H H X
				return i;
			}
			if (map_player[x][y - 2] == ship && map_player[x][y - 1] == ship && map_player[x][y + 1] == ship && map_player[x][y - 3] != ship && map_player[x][y + 2] != ship)
			{
				i = 4;			// H H X H
				return i;
			}
			if (map_player[x][y + 2] == ship && map_player[x][y - 1] == ship && map_player[x][y + 1] == ship && map_player[x][y - 2] != ship && map_player[x][y + 3] != ship)
			{
				i = 4;			// H X H H
				return i;
			}
			if (map_player[x][y + 2] == ship && map_player[x][y + 3] == ship && map_player[x][y + 1] == ship && map_player[x][y - 1] != ship && map_player[x][y + 4] != ship)
			{
				i = 4;			// X H H H
				return i;
			}
			break;
		case 1:
			if (map_player[x + 1][y] == ship && map_player[x - 1][y] != ship && map_player[x + 2][y] != ship)
			{					// X
				i = 2;			// H 
				return i;
			}
			if (map_player[x - 1][y] == ship && map_player[x + 1][y] != ship && map_player[x - 2][y] != ship)
			{
				i = 2;		//  H
							//  X
				return i;
			}
			if (map_player[x + 1][y] == ship && map_player[x - 1][y] == ship && map_player[x - 2][y] != ship && map_player[x + 2][y] != ship)
			{
				i = 3;			// H X H

				return i;
			}
			if (map_player[x + 2][y] == ship && map_player[x + 1][y] == ship && map_player[x - 1][y] != ship && map_player[x + 3][y] != ship)
			{
				i = 3;			// X H H
				return i;
			}
			if (map_player[x - 1][y] == ship && map_player[x - 2][y] == ship && map_player[x - 3][y] != ship && map_player[x + 1][y] != ship)
			{
				i = 3;			// H H X
				return i;
			}

			if (map_player[x - 3][y] == ship && map_player[x - 1][y] == ship && map_player[x - 2][y] == ship && map_player[x - 4][y] != ship && map_player[x + 1][y] != ship)
			{
				i = 4;			// H H H X
				return i;
			}
			if (map_player[x - 2][y] == ship && map_player[x - 1][y] == ship && map_player[x + 1][y] == ship && map_player[x - 3][y] != ship && map_player[x + 2][y] != ship)
			{
				i = 4;			// H H X H
				return i;
			}
			if (map_player[x + 2][y] == ship && map_player[x - 1][y] == ship && map_player[x + 1][y] == ship && map_player[x - 2][y] != ship && map_player[x + 3][y] != ship)
			{
				i = 4;			// H X H H
				return i;
			}
			if (map_player[x + 2][y] == ship && map_player[x + 3][y] == ship && map_player[x + 1][y] == ship && map_player[x - 1][y] != ship && map_player[x + 4][y] != ship)
			{
				i = 4;			// X H H H
				return i;
			}

			break;
		default:
			break;
		}
	
	
	return 0;
}
int SeaBattle::checkShipCells_1(int x, int y, int q, int direction)
{

	int e = 0;
	switch (q)
	{
	case 1:
	{
		if (map_bot[x][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x - 1][y - 1] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x + 1][y + 1] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x][y + 1] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x + 1][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x][y - 1] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x - 1][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x - 1][y + 1] == ship)
		{
			e = 1;
			return e;
		}
		else if (map_bot[x + 1][y - 1] == ship)
		{
			e = 1;
			return e;
		}
	}

	case 2:
	{
		if (map_bot[x][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (direction == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				if (map_bot[x - 1 + i][y] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y + 1] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y - 1] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				if (map_bot[x][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x + 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
	}
	case 3:
	{
		if (map_bot[x][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (direction == 1)
		{
			for (int i = 0; i < 5; i++)
			{
				if (map_bot[x - 1 + i][y] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y + 1] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y - 1] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				if (map_bot[x][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x + 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
	}
	case 4:
	{
		if (map_bot[x][y] == ship)
		{
			e = 1;
			return e;
		}
		else if (direction == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				if (map_bot[x - 1 + i][y] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y + 1] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1 + i][y - 1] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 6; i++)
			{
				if (map_bot[x][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x + 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
				else if (map_bot[x - 1][y - 1 + i] == ship)
				{
					e = 1;
					return e;
				}
			}
		}
	}

	default:
		break;
	}

	return e;
}


void SeaBattle::field_P(int i, int x, int y, int direction)
{
	switch (i)
	{
	case 1:
		for (int i = 0; i < 3; i++) 
		{
			map_player[x - 1 + i][y + 1] = P;
			map_player[x - 1 + i][y - 1] = P;
		}
		map_player[x - 1][y] = P;
		map_player[x + 1][y] = P;
		break;
	case 2:
		if (direction == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				map_player[x - 1 + i][y + 1] = P;
				map_player[x - 1 + i][y - 1] = P;
			}
			map_player[x - 1][y] = P;
			map_player[x + 2][y] = P;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				map_player[x - 1][y - 1 + i] = P;
				map_player[x + 1][y - 1 + i] = P;
			}
			map_player[x][y - 1] = P;
			map_player[x][y + 2] = P;
		}
		break;
	case 3:
		if (direction == 1)
		{
			for (int i = 0; i < 5; i++)
			{
				map_player[x - 1 + i][y + 1] = P;
				map_player[x - 1 + i][y - 1] = P;
			}
			map_player[x - 1][y] = P;
			map_player[x + 3][y] = P;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				map_player[x - 1][y - 1 + i] = P;
				map_player[x + 1][y - 1 + i] = P;
			}
			map_player[x][y - 1] = P;
			map_player[x][y + 3] = P;
		}
		break;
	case 4:
		if (direction == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				map_player[x - 1 + i][y + 1] = P;
				map_player[x - 1 + i][y - 1] = P;
			}
			map_player[x - 1][y] = P;
			map_player[x + 4][y] = P;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 6; i++)
			{
				map_player[x - 1][y - 1 + i] = P;
				map_player[x + 1][y - 1 + i] = P;
			}
			map_player[x][y - 1] = P;
			map_player[x][y + 4] = P;
		}
		break;
	default:
		break;
	}
}

void SeaBattle::field_O(int i, int x, int y, int direction)
{
	switch (i)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			map_player[x - 1 + i][y + 1] = O;
			map_player[x - 1 + i][y - 1] = O;
		}
		map_player[x - 1][y] = O;
		map_player[x + 1][y] = O;
		break;
	case 2:
		if (direction == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				map_player[x - 1 + i][y + 1] = O;
				map_player[x - 1 + i][y - 1] = O;
			}
			map_player[x - 1][y] = O;
			map_player[x + 2][y] = O;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 4; i++)
			{
				map_player[x - 1][y - 1 + i] = O;
				map_player[x + 1][y - 1 + i] = O;
			}
			map_player[x][y - 1] = O;
			map_player[x][y + 2] = O;
		}
		break;
	case 3:
		if (direction == 1)
		{
			for (int i = 0; i < 5; i++)
			{
				map_player[x - 1 + i][y + 1] = O;
				map_player[x - 1 + i][y - 1] = O;
			}
			map_player[x - 1][y] = O;
			map_player[x + 3][y] = O;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 5; i++)
			{
				map_player[x - 1][y - 1 + i] = O;
				map_player[x + 1][y - 1 + i] = O;
			}
			map_player[x][y - 1] = O;
			map_player[x][y + 3] = O;
		}
		break;
	case 4:
		if (direction == 1)
		{
			for (int i = 0; i < 6; i++)
			{
				map_player[x - 1 + i][y + 1] = O;
				map_player[x - 1 + i][y - 1] = O;
			}
			map_player[x - 1][y] = O;
			map_player[x + 4][y] = O;
		}
		else if (direction == 0)
		{
			for (int i = 0; i < 6; i++)
			{
				map_player[x - 1][y - 1 + i] = O;
				map_player[x + 1][y - 1 + i] = O;
			}
			map_player[x][y - 1] = O;
			map_player[x][y + 4] = O;
		}
		break;
	default:
		break;
	}
}

void SeaBattle::setShips_Bot()
{
	srand(time(0));
	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int i = 0;
	int x; int y; int k; int q = 4; int direction;
	while (i < 10)
	{
		//q = rand() % 4 + 1;
		if (four == 1)
		{
			while (q == 4)
			{
				q = rand() % 4 + 1;
			}
		}
		else if (three == 2)
		{
			while (q == 3)
			{
				q = rand() % 4 + 1;
			}
		}
		else if (two == 2)
		{
			while (q == 2)
			{
				q = rand() % 4 + 1;
			}
		}
		else if (one == 4)
		{
			while (q == 1)
			{
				q = rand() % 4 + 1;
			}
		}

		switch (q)
		{
		case 1:
			while (one < 4)
			{
				x = rand() % 10 + 1;
				y = rand() % 10 + 1;

				if (SeaBattle::checkShipCells_1(x, y, q, 0) == 1)
					break;
				else if (SeaBattle::checkShipCells_1(x, y, q, 0) == 0)
				{
					map_bot[x][y] = ship;
					i++;
					one++;
				}
			}
			if (one == 4)
				q--;
			break;
		case 2:
			while (two < 3)
			{
				direction = rand() % 2;
				x = rand() % 10 + 1;
				y = rand() % 10 + 1;
				if (SeaBattle::checkShipCells_1(x, y, q, direction) == 1)
					break;
				else if (SeaBattle::checkShipCells_1(x, y, q, direction) == 0)
				{
					////
					if (direction == 1)
					{
						//map_player[x][y] = ship;
						if (x + 1 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 1, y, q, direction) == 0)
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								i++;
								two++;
							}
							else
								break;
						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x + 1][y] = ship;
							i++;
							two++;
						}
					}
					else if (direction == 0)
					{

						if (y + 1 > 10)
						{
							if (SeaBattle::checkShipCells_1(x, y - 1, q, direction) == 0)
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								i++;
								two++;
							}
							else
								break;
						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x][y + 1] = ship;
							i++;
							two++;
						}
					}
					/////
				}
			}
			if (two == 3)
				q--;
			break;
		case 3:
			while (three < 2)
			{
				direction = rand() % 2;
				x = rand() % 10 + 1;
				y = rand() % 10 + 1;
				if (SeaBattle::checkShipCells_1(x, y, q, direction) == 1)
					break;
				else if (SeaBattle::checkShipCells_1(x, y, q, direction) == 0)
				{
					////
					if (direction == 1)
					{
						//map_player[x][y] = ship;
						if (x + 1 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 2, y, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								map_bot[x - 2][y] = ship;
								i++;
								three++;
							}
							else
								break;

						}
						else if (x + 2 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 1, y, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								map_bot[x + 1][y] = ship;
								i++;
								three++;
							}
							else
								break;
						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x + 1][y] = ship;
							map_bot[x + 2][y] = ship;
							i++;
							three++;
						}

					}
					else if (direction == 0)
					{
						//map_player[x][y] = ship;
						if (y + 1 > 10)
						{
							if (SeaBattle::checkShipCells_1(x, y - 2, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								map_bot[x][y - 2] = ship;
								i++;
								three++;
							}
							else
								break;
						}
						else if (y + 2 > 10)
						{
							if (SeaBattle::checkShipCells_1(x, y - 1, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								map_bot[x][y + 1] = ship;
								i++;
								three++;
							}
							else
								break;
						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x][y + 1] = ship;
							map_bot[x][y + 2] = ship;
							i++;
							three++;
						}
					}
					////
				}
			}
			if (three == 2)
				q--;
			break;
		case 4:
			while (four < 1)
			{

				direction = rand() % 2;
				if (direction == 0)
				{
					x = rand() % 2 + 1;
					y = rand() % 10 + 1;
				}
				else if (direction == 1)
				{
					x = rand() % 10 + 1;
					y = rand() % 2 + 1;
				}

				if (SeaBattle::checkShipCells_1(x, y, q, direction) == 1)
					break;
				else if (SeaBattle::checkShipCells_1(x, y, q, direction) == 0)
				{
					//////
					if (direction == 1)
					{
						//map_player[x][y] = ship;
						if (x + 1 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 3, y, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								map_bot[x - 2][y] = ship;
								map_bot[x - 3][y] = ship;
								i++;
								four++;
							}
							else
								break;
						}
						else if (x + 2 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 2, y, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								map_bot[x + 1][y] = ship;
								map_bot[x - 2][y] = ship;
								i++;
								four++;
							}
							else
								break;

						}
						else if (x + 3 > 10)
						{
							if (SeaBattle::checkShipCells_1(x - 1, y, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x - 1][y] = ship;
								map_bot[x + 1][y] = ship;
								map_bot[x + 2][y] = ship;
								i++;
								four++;
							}
							else
								break;
						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x + 1][y] = ship;
							map_bot[x + 2][y] = ship;
							map_bot[x + 3][y] = ship;
							i++;
							four++;
						}

					}
					else if (direction == 0)
					{
						//map_player[x][y] = ship;
						if (y + 1 > 10)
						{

							if (SeaBattle::checkShipCells_1(x, y - 3, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								map_bot[x][y - 2] = ship;
								map_bot[x][y - 3] = ship;
								i++;
								four++;
							}
							else
								break;
						}
						else if (y + 2 > 10)
						{
							if (SeaBattle::checkShipCells_1(x, y - 2, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								map_bot[x][y + 1] = ship;
								map_bot[x][y - 2] = ship;
								i++;
								four++;
							}
							else
								break;
						}
						else if (y + 3 > 10)
						{
							if (SeaBattle::checkShipCells_1(x, y - 1, q, direction) == 0)		//x+2 -> x+1
							{
								map_bot[x][y] = ship;
								map_bot[x][y - 1] = ship;
								map_bot[x][y + 1] = ship;
								map_bot[x][y + 2] = ship;
								i++;
								four++;
							}
							else
								break;

						}
						else
						{
							map_bot[x][y] = ship;
							map_bot[x][y + 1] = ship;
							map_bot[x][y + 2] = ship;
							map_bot[x][y + 3] = ship;
							i++;
							four++;
						}
					}
					//////
				}

			}
			q--;
			break;
		default:
			break;
		}
		cout << i << endl;
		system("cls");
	}
	system("cls");
	SeaBattle::showMap();
}
SeaBattle::SeaBattle()
{
	ships1 = 0;
	ships2 = 0;
	ships3 = 0;
	ships4 = 0;
	whoseStep = true;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			map_player[i][j] = '-';
			map_bot[i][j] = '-';
			hidden_map_bot[i][j] = '-';
			hidden_map_player[i][j] = '-';

			map_player[0][j + 1] = j + '0';
			map_player[0][11] = '0';

			map_bot[0][j + 1] = j + '0';
			map_bot[0][11] = '0';

			hidden_map_bot[0][j + 1] = j + '0';
			hidden_map_bot[0][11] = '0';

			hidden_map_player[0][j + 1] = j + '0';
			hidden_map_player[0][11] = '0';
		}
	}
	map_player[0][0] = ' ';
	map_player[1][0] = '0';
	map_player[2][0] = '1';
	map_player[3][0] = '2';
	map_player[4][0] = '3';
	map_player[5][0] = '4';
	map_player[6][0] = '5';
	map_player[7][0] = '6';
	map_player[8][0] = '7';
	map_player[9][0] = '8';
	map_player[10][0] = '9';

	map_bot[0][0] = ' ';
	map_bot[1][0] = '0';
	map_bot[2][0] = '1';
	map_bot[3][0] = '2';
	map_bot[4][0] = '3';
	map_bot[5][0] = '4';
	map_bot[6][0] = '5';
	map_bot[7][0] = '6';
	map_bot[8][0] = '7';
	map_bot[9][0] = '8';
	map_bot[10][0] = '9';

	hidden_map_bot[0][0] = ' ';
	hidden_map_bot[1][0] = '0';
	hidden_map_bot[2][0] = '1';
	hidden_map_bot[3][0] = '2';
	hidden_map_bot[4][0] = '3';
	hidden_map_bot[5][0] = '4';
	hidden_map_bot[6][0] = '5';
	hidden_map_bot[7][0] = '6';
	hidden_map_bot[8][0] = '7';
	hidden_map_bot[9][0] = '8';
	hidden_map_bot[10][0] = '9';

	hidden_map_player[0][0] = ' ';
	hidden_map_player[1][0] = '0';
	hidden_map_player[2][0] = '1';
	hidden_map_player[3][0] = '2';
	hidden_map_player[4][0] = '3';
	hidden_map_player[5][0] = '4';
	hidden_map_player[6][0] = '5';
	hidden_map_player[7][0] = '6';
	hidden_map_player[8][0] = '7';
	hidden_map_player[9][0] = '8';
	hidden_map_player[10][0] = '9';
	for (int i = 0; i < 12; i++)
	{
		hidden_map_bot[11][i] = ' ';
		hidden_map_player[11][i] = ' ';
		map_bot[11][i] = ' ';
		map_player[11][i] = ' ';

		hidden_map_bot[i][11] = ' ';
		hidden_map_player[i][11] = ' ';
		map_bot[i][11] = ' ';
		map_player[i][11] = ' ';
	}
}
void SeaBattle::showMap()
{
	
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			std::cout << hidden_map_player[i][j] << ' ';
		}
		std::cout << '\t' << '\t';

		for (int j = 0; j < 12; j++)
		{
			std::cout << hidden_map_bot[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	/*cout << "Ships1 = " << ships1 << endl;
	cout << "Ships2 = " << ships2 << endl;
	cout << "Ships3 = " << ships3 << endl;
	cout << "Ships4 = " << ships4 << endl;*/
}

void SeaBattle::Shot()
{

	int count_Ship;
	int count_Ships_bot = 0;
	int ship4_decks;
	bool miss = false;
	int k;
	int x, y, direction;
	int X_Buffer = -1; int Y_Buffer = -1;
	int count = 0;
	//cin.get();
	while (true)
	{
		if (whoseStep == true)
		{
			srand(time(0));
			whoseStep = false;
			
			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
			while (map_player[x][y] == P || map_player[x][y] == shot || map_player[x][y] == 'X')
				{
					x = rand() % 10 + 1;
					y = rand() % 10 + 1;
				}
			
			
			if (miss == false) 
			{
				if (map_player[x][y] == ship)
				{
					map_player[x][y] = 'X';
					hidden_map_player[x][y] = 'X';
					if (map_player[x + 1][y] != ship && map_player[x - 1][y] != ship
						&& map_player[x][y + 1] != ship && map_player[x][y - 1] != ship)
					{
						SeaBattle::field_P(1, x, y, 3);
						ships1++;
					}
					
					if (map_player[x + 1][y] == ship || map_player[x - 1][y] == ship)
					{
						direction = 1;
						if (check_Ships(x, y, 1) == 2)
						{
							if (x + 1 != 1)
							{
								if (map_player[x + 1][y] == ship)
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x + 1][y] = 'X';
									hidden_map_player[x + 1][y] = 'X';
									SeaBattle::field_P(2, x, y, 1);
									whoseStep = true;
									ships2++;
								}
								else
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x + 1][y] = shot;
									hidden_map_player[x + 1][y] = shot;
									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 2;
								}
							}
							else
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								SeaBattle::field_P(2, x - 1, y, 1);
								whoseStep = true;
								ships2++;
							}
							
						}
						if (check_Ships(x, y, 1) == 3)
						{
							if (map_player[x - 1][y] == ship && map_player[x - 2][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 2][y] = 'X';
								hidden_map_player[x - 2][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								SeaBattle::field_P(3, x - 2, y, 1);
								whoseStep = true;
								ships3++;
							}
							if (map_player[x + 1][y] == ship && map_player[x - 1][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (x - 2 != 0)
								{
									map_player[x - 2][y] = shot;
									hidden_map_player[x - 2][y] = shot;
									miss = true;
									X_Buffer = x + 1;
									Y_Buffer = y;
									count_Ship = 3;
								}
								else
								{
									map_player[x + 1][y] = 'X';
									hidden_map_player[x + 1][y] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									SeaBattle::field_P(3, x + 1, y, 1);
									whoseStep = true;
									ships3++;
								}
								
							}
							if (map_player[x + 1][y] == ship && map_player[x + 2][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x + 1][y] = 'X';
								hidden_map_player[x + 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x + 2][y] = 'X';
								hidden_map_player[x + 2][y] = 'X';
								SeaBattle::field_P(3, x, y, 1);
								whoseStep = true;
								ships3++;
							}
						}
						if (check_Ships(x, y, 1) == 4)
						{
							if (map_player[x + 1][y] == ship && map_player[x  + 2][y] == ship && map_player[x + 3][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (x - 1 != 0)
								{
									map_player[x - 1][y] = shot;
									hidden_map_player[x - 1][y] = shot;

									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 1;
								}
								else
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x + 1][y] = 'X';
									hidden_map_player[x + 1][y] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x + 2][y] = 'X';
									hidden_map_player[x + 2][y] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x + 3][y] = 'X';
									hidden_map_player[x + 3][y] = 'X';
									SeaBattle::field_P(4, x, y, 1);	// X
									ships4++;
									whoseStep = true;
								}
								
							}
							if (map_player[x + 1][y] == ship && map_player[x + 2][y] == ship && map_player[x - 1][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x + 1][y] = 'X';
								hidden_map_player[x + 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (x - 2 != 0)
								{
									map_player[x - 2][y] = shot;
									hidden_map_player[x - 2][y] = shot;
									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 2;
								}
								else
								{
									map_player[x + 2][y] = 'X';
									hidden_map_player[x + 2][y] = 'X';
									SeaBattle::field_P(4, x - 1, y, 1);	// X
									ships4++;
									whoseStep = true;
								}
								

								
							}
							if (map_player[x + 1][y] == ship && map_player[x - 2][y] == ship && map_player[x - 1][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x + 1][y] = 'X';
								hidden_map_player[x + 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (x + 2 != 11)
								{
									map_player[x + 2][y] = shot;
									hidden_map_player[x + 2][y] = shot;
									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 3;
								}
								else
								{
									map_player[x - 2][y] = 'X';
									hidden_map_player[x - 2][y] = 'X';
									SeaBattle::field_P(4, x - 2, y, 1);	// X
									ships4++;
									whoseStep = true;
								}
								

								
							}
							if (map_player[x - 3][y] == ship && map_player[x - 2][y] == ship && map_player[x - 1][y] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 1][y] = 'X';
								hidden_map_player[x - 1][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 2][y] = 'X';
								hidden_map_player[x - 2][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x - 3][y] = 'X';
								hidden_map_player[x - 3][y] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								

								SeaBattle::field_P(4, x - 3, y, 1);	// X
								
								whoseStep = true;
								
								
								ships4++;
							}
						}
					}
					if (map_player[x][y + 1] == ship || map_player[x][y - 1] == ship)
					{
						direction = 0;
						if (check_Ships(x, y, 0) == 2)
						{
							if (y + 1 != 11)
							{
								if (map_player[x][y + 1] == ship)
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y + 1] = 'X';
									hidden_map_player[x][y + 1] = 'X';
									SeaBattle::field_P(2, x, y, 0);
									whoseStep = true;
									ships2++;
								}
								else
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y + 1] = shot;
									hidden_map_player[x][y + 1] = shot;
									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 2;
								}
							}
							else
							{
								Sleep(200);
							std::system("cls");
							SeaBattle::showMap();
							map_player[x][y - 1] = 'X';
							hidden_map_player[x][y - 1] = 'X';
							SeaBattle::field_P(2, x - 1, y, 0);
							whoseStep = true;
							ships2++;
							}
							
						}
						if (check_Ships(x, y, 0) == 3)
						{
							if (map_player[x][y - 1] == ship && map_player[x][y - 2] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 1] = 'X';
								hidden_map_player[x][y - 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 2] = 'X';
								hidden_map_player[x][y - 2] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								SeaBattle::field_P(3, x, y - 2, 0);
								whoseStep = true;
								ships3++;
							}
							if (map_player[x][y + 1] == ship && map_player[x][y - 1] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 1] = 'X';
								hidden_map_player[x][y - 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();

								if (y - 2 != 0)
								{
									map_player[x][y - 2] = shot;
									hidden_map_player[x][y - 2] = shot;
									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 3;
								}
								else
								{
								map_player[x][y + 1] = 'X';
								hidden_map_player[x][y + 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								SeaBattle::field_P(3, x, y - 1, 0);
								whoseStep = true;
								ships3++;
								}
								
								
							}
							if (map_player[x][y + 1] == ship && map_player[x][y + 2] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x ][y + 1] = 'X';
								hidden_map_player[x][y + 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y + 2] = 'X';
								hidden_map_player[x][y + 2] = 'X';
								SeaBattle::field_P(3, x, y, 0);
								whoseStep = true;
								ships3++;
							}

						}
						if (check_Ships(x, y, 0) == 4)
						{
							if (map_player[x][y + 1] == ship && map_player[x][y + 2] == ship && map_player[x][y + 3] == ship)
							{
								if (y - 1 != 0)
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y - 1] = shot;
									hidden_map_player[x][y - 1] = shot;

									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 1;
								}
								else
								{
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y + 1] = 'X';
									hidden_map_player[x][y + 1] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y + 2] = 'X';
									hidden_map_player[x][y + 2] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									map_player[x][y + 3] = 'X';
									hidden_map_player[x][y + 3] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									

									SeaBattle::field_P(4, x, y, 0);	// X

									whoseStep = true;
									ships4++;
								}
							}
							if (map_player[x][y + 1] == ship && map_player[x][y + 2] == ship && map_player[x][y - 1] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 1] = 'X';
								hidden_map_player[x][y - 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y + 1] = 'X';
								hidden_map_player[x][y + 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (y - 2 != 0)
								{
									map_player[x][y - 2] = shot;
									hidden_map_player[x][y - 2] = shot;

									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 2;
								}
								else
								{
									map_player[x][y + 2] = 'X';
									hidden_map_player[x][y + 2] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									SeaBattle::field_P(4, x, y - 1, 0);	// X

									whoseStep = true;
									ships4++;
								}
								
							}
							if (map_player[x][y + 1] == ship && map_player[x][y - 2] == ship && map_player[x][y - 1] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y + 1] = 'X';
								hidden_map_player[x][y + 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 1] = 'X';
								hidden_map_player[x][y - 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								if (y + 2 != 11)
								{
									map_player[x][y + 2] = shot;
									hidden_map_player[x][y + 2] = shot;

									miss = true;
									X_Buffer = x;
									Y_Buffer = y;
									count_Ship = 4;
									ship4_decks = 3;
								}
								else
								{
									map_player[x][y - 2] = 'X';
									hidden_map_player[x][y - 2] = 'X';
									Sleep(200);
									std::system("cls");
									SeaBattle::showMap();
									SeaBattle::field_P(4, x, y - 2, 0);	// X

									whoseStep = true;
									ships4++;
								}
								
							}
							if (map_player[x][y - 3] == ship && map_player[x][y - 2] == ship && map_player[x][y - 1] == ship)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 1] = 'X';
								hidden_map_player[x][y - 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 2] = 'X';
								hidden_map_player[x][y - 2] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[x][y - 3] = 'X';
								hidden_map_player[x][y - 3] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								

								SeaBattle::field_P(4, x, y - 3, 0);	// X

								whoseStep = true;
								ships4++;
							}

						}
					}
				}
				else if (map_player[x][y] != ship)
				{
					map_player[x][y] = shot;
					hidden_map_player[x][y] = shot;
				}
			}
			else
			{
				if (count == 1) //промах
				{
					if (direction == 1)
					{
						switch (count_Ship)
						{
						case 2:
							
							Sleep(200);
							std::system("cls");
							SeaBattle::showMap();
							map_player[X_Buffer - 1][Y_Buffer] = 'X';
							hidden_map_player[X_Buffer - 1][Y_Buffer] = 'X';	// H
							SeaBattle::field_P(2, X_Buffer - 1, Y_Buffer, 1);	// X
							miss = false;
							whoseStep = true;
							X_Buffer = -1;
							Y_Buffer = -1;
							count_Ship = 0;
							ships2++;
							count = 0;
							break;
						case 3:
							//X_Buffer = x + 1
							Sleep(200);
							std::system("cls");
							SeaBattle::showMap();
							map_player[X_Buffer][Y_Buffer] = 'X';
							hidden_map_player[X_Buffer][Y_Buffer] = 'X';		// H
							SeaBattle::field_P(3, X_Buffer - 2, Y_Buffer, 1);	// X
							miss = false;										// H
							whoseStep = true;
							X_Buffer = -1;
							Y_Buffer = -1;
							count_Ship = 0;
							ships3++;
							count = 0;
							break;
						case 4:
							if (ship4_decks == 1)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer + 1][Y_Buffer] = 'X';
								hidden_map_player[X_Buffer + 1][Y_Buffer] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer + 2][Y_Buffer] = 'X';
								hidden_map_player[X_Buffer + 2][Y_Buffer] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer + 3][Y_Buffer] = 'X';
								hidden_map_player[X_Buffer + 3][Y_Buffer] = 'X';

								SeaBattle::field_P(4, X_Buffer, Y_Buffer, 1);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							if (ship4_decks == 2)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer + 2][Y_Buffer] = 'X';
								hidden_map_player[X_Buffer + 2][Y_Buffer] = 'X';

								SeaBattle::field_P(4, X_Buffer - 1, Y_Buffer, 1);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							if (ship4_decks == 3)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer - 2][Y_Buffer] = 'X';
								hidden_map_player[X_Buffer - 2][Y_Buffer] = 'X';

								SeaBattle::field_P(4, X_Buffer - 2, Y_Buffer, 1);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							break;
						default:
							break;
						}
					}
					if (direction == 0)
					{
						switch (count_Ship)
						{
						case 2:
							Sleep(200);
							std::system("cls");
							SeaBattle::showMap();
							map_player[X_Buffer][Y_Buffer - 1] = 'X';
							hidden_map_player[X_Buffer][Y_Buffer - 1] = 'X';	// H X
							SeaBattle::field_P(2, X_Buffer, Y_Buffer - 1, 0);	// 
							miss = false;
							whoseStep = true;
							X_Buffer = -1;
							Y_Buffer = -1;
							count_Ship = 0;
							ships2++;
							count = 0;
							break;
						case 3:
							Sleep(200);
							std::system("cls");
							SeaBattle::showMap();
							map_player[X_Buffer][Y_Buffer + 1] = 'X';
							hidden_map_player[X_Buffer][Y_Buffer + 1] = 'X';	// H X H
							SeaBattle::field_P(3, X_Buffer, Y_Buffer - 1, 0);	// 
							miss = false;										// 
							whoseStep = true;
							X_Buffer = -1;
							Y_Buffer = -1;
							count_Ship = 0;
							ships3++;
							count = 0;
							break;
						case 4:
							if (ship4_decks == 1)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer][Y_Buffer + 1] = 'X';
								hidden_map_player[X_Buffer][Y_Buffer + 1] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer][Y_Buffer + 2] = 'X';
								hidden_map_player[X_Buffer][Y_Buffer + 2] = 'X';
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer][Y_Buffer + 3] = 'X';
								hidden_map_player[X_Buffer][Y_Buffer + 3] = 'X';

								SeaBattle::field_P(4, X_Buffer, Y_Buffer, 0);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							if (ship4_decks == 2)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer][Y_Buffer + 2] = 'X';
								hidden_map_player[X_Buffer][Y_Buffer + 2] = 'X';

								SeaBattle::field_P(4, X_Buffer, Y_Buffer - 1, 0);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							if (ship4_decks == 3)
							{
								Sleep(200);
								std::system("cls");
								SeaBattle::showMap();
								map_player[X_Buffer][Y_Buffer - 2] = 'X';
								hidden_map_player[X_Buffer][Y_Buffer - 2] = 'X';

								SeaBattle::field_P(4, X_Buffer, Y_Buffer - 2, 0);
								miss = false;									// H
								whoseStep = true;
								X_Buffer = -1;
								Y_Buffer = -1;
								count_Ship = 0;
								ships4++;
								count = 0;
							}
							break;
						default:
							break;
						}
					}
				}
				count++;
			}
			
			if ((ships1 + ships2 + ships3 + ships4) == 10)
			{
				whoWin = true;
				break;
			}
		}
		else
		{
			
			whoseStep = true;
			cout << "Enter coordinate from 0 to 9: ";
			cin >> k;
			/*while (!(cin>>k))
			{
			//cout << "Error\n";
			cin.clear();
			fflush(stdin);
			cin >> k;
			}*/
			x = k / 10 + 1;
			y = k % 10 + 1;
			while (map_bot[x][y] == shot || map_bot[x][y] == 'X')
			{
				cout << "Enter coordinate from 0 to 9: ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
			}	
			if (map_bot[x][y] == ship)
			{
				map_bot[x][y] = 'X';
				hidden_map_bot[x][y] = 'X';
				whoseStep = false;
				count_Ships_bot++;
			}
			else
			{
				map_bot[x][y] = shot;
				hidden_map_bot[x][y] = shot;
			}
			if (count_Ships_bot == 20)
			{
				whoWin = false;
				break;
			}
		}
		
		std::system("cls");
		SeaBattle::showMap();
	}
}

void SeaBattle::setShips_Player()
{
	SeaBattle::setShips_Bot();
	int decks, x, y, k, direction;
	int sh1 = 0;
	int sh2 = 0;
	int sh3 = 0;
	int sh4 = 0;
	/*map_player[3][4] = ship;
	map_player[3][5] = ship;
	map_player[3][6] = ship;
	map_player[3][7] = ship;

	
	map_player[5][8] = ship;
	map_player[10][6] = ship;
	map_player[2][10] = ship;
	map_player[4][2] = ship;

	map_player[6][4] = ship;
	map_player[7][4] = ship;

	map_player[6][1] = ship;
	map_player[7][1] = ship;

	map_player[10][10] = ship;
	map_player[9][10] = ship;

	map_player[9][1] = ship;
	map_player[9][2] = ship;
	map_player[9][3] = ship;

	map_player[7][7] = ship;
	map_player[7][8] = ship;
	map_player[7][9] = ship;
	*/

	
	while (1)
	{
		if (sh1 == 4 && sh2 == 3 && sh3 == 2 && sh4 == 1)
			break;
		cout << "number of decks (1 - 4): ";
		cin >> decks;	
		if (decks == 1)
		{
			while (sh1 == 4)
			{
				cout << "sh1 = 4" << endl;
				cout << "number of decks (1 - 4)";
				cin >> decks;
				if (decks != 1)
					break;
			}
		}
		if (decks == 2)
		{
			while (sh2 == 3)
			{
				cout << "sh2 = 3" << endl;
				cout << "number of decks (1 - 4)";
				cin >> decks;
				if (decks != 2)
					break;
			}
		}
		if (decks == 3)
		{
			while (sh3 == 2)
			{
				cout << "sh3 = 2" << endl;
				cout << "number of decks (1 - 4)";
				cin >> decks;
				if (decks != 3)
					break;
			}
		}
		if (decks == 4)
		{
			while (sh4 == 1)
			{
				cout << "sh4 = 1" << endl;
				cout << "number of decks (1 - 4)";
				cin >> decks;
				if (decks != 4)
					break;
			}
		}

		if (decks == 1)
		{
			cout << "Enter coordinate for ships(0 - 9) ";
			cin >> k;
			x = k / 10 + 1;
			y = k % 10 + 1;
			while (map_player[x][y] == ship || map_player[x][y] == 'O')
			{
				cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
			}
			if (sh1 < 4)
			{
				map_player[x][y] = ship;
				hidden_map_player[x][y] = ship;
				SeaBattle::field_O(1, x, y, 3);
				sh1++;
			}
			
			std::system("cls");
			SeaBattle::showMap();
			
		}
		if (decks == 2)
		{
			cout << "Enter direcyion: ";
			cin >> direction;
			if (direction == 1)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh2 < 3)
				{
					if (x + 1 != 11)
					{
						map_player[x][y] = ship;
						map_player[x + 1][y] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x + 1][y] = ship;
						SeaBattle::field_O(2, x, y, 1);
						sh2++;
					}
					else
					{
						if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
							map_player[x - 2][y - 1] != ship)
						{
							map_player[x][y] = ship;
							map_player[x - 1][y] = ship;
							hidden_map_player[x][y] = ship;
							hidden_map_player[x - 1][y] = ship;
							SeaBattle::field_O(2, x - 1, y, 1);
							sh2++;
						}
						else
							cout << "Error!" << endl;
					}
					
				}

				std::system("cls");
				SeaBattle::showMap();
			}
			if (direction == 0)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh2 < 3)
				{
					if (y + 1 != 11)
					{
						map_player[x][y] = ship;
						map_player[x][y + 1] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x][y + 1] = ship;
						SeaBattle::field_O(2, x, y, 0);
						sh2++;
					}
					else
					{
						if (map_player[x][y - 2] != ship && map_player[x + 1][y - 2] != ship &&
							map_player[x - 1][y - 2] != ship)
						{
							map_player[x][y] = ship;
							map_player[x][y - 1] = ship;
							hidden_map_player[x][y] = ship;
							hidden_map_player[x][y - 1] = ship;
							SeaBattle::field_O(2, x, y - 1, 0);
							sh2++;
						}
						else
							cout << "Error!" << endl;
					}

				}

				std::system("cls");
				SeaBattle::showMap();
			}

		}
		if (decks == 3)
		{
			cout << "Enter direcyion: ";
			cin >> direction;
			if (direction == 1)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh3 < 2)
				{
					if (x + 2 < 11)
					{
						map_player[x][y] = ship;
						map_player[x + 1][y] = ship;
						map_player[x + 2][y] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x + 1][y] = ship;
						hidden_map_player[x + 2][y] = ship;
						SeaBattle::field_O(3, x, y, 1);
						sh3++;
					}
					else
					{
						if (x + 2 == 11)
						{
							if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 2][y - 1] != ship)
							{
								map_player[x][y] = ship;
								map_player[x - 1][y] = ship;
								map_player[x + 1][y] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x - 1][y] = ship;
								hidden_map_player[x + 1][y] = ship;
								SeaBattle::field_O(3, x - 1, y, 1);
								sh3++;
							}
							else
								cout << "Error!" << endl;
						}
						else if (x + 1 == 11)
						{
							if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 2][y - 1] != ship && map_player[x - 3][y - 1] != ship &&
								map_player[x - 3][y + 1] != ship && map_player[x - 3][y] != ship)
							{
								map_player[x][y] = ship;
								map_player[x - 1][y] = ship;
								map_player[x - 2][y] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x - 1][y] = ship;
								hidden_map_player[x - 2][y] = ship;
								SeaBattle::field_O(3, x - 2, y, 1);
								sh3++;
							}
							else
								cout << "Error!" << endl;
						}
					}

				}

				std::system("cls");
				SeaBattle::showMap();
			}
			if (direction == 0)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh3 < 2)
				{
					if (y + 2 < 11)
					{
						map_player[x][y] = ship;
						map_player[x][y + 1] = ship;
						map_player[x][y + 2] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x][y + 1] = ship;
						hidden_map_player[x][y + 2] = ship;
						SeaBattle::field_O(3, x, y, 0);
						sh3++;
					}
					else
					{
						if (y + 2 == 11)
						{
							if (map_player[x][y - 2] != ship && map_player[x + 1][y - 2] != ship &&
								map_player[x - 1][y - 2] != ship)
							{
								map_player[x][y] = ship;
								map_player[x][y - 1] = ship;
								map_player[x][y + 1] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x][y - 1] = ship;
								hidden_map_player[x][y + 1] = ship;
								SeaBattle::field_O(3, x, y - 1, 0);
								sh3++;
							}
							else
								cout << "Error!" << endl;
						}
						else if (y + 1 == 11)
						{
							if (map_player[x][y - 2] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 1][y - 2] != ship && map_player[x - 1][y - 3] != ship &&
								map_player[x + 1][y - 3] != ship && map_player[x][y - 3] != ship)
							{
								map_player[x][y] = ship;
								map_player[x][y - 1] = ship;
								map_player[x][y - 2] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x][y - 1] = ship;
								hidden_map_player[x][y - 2] = ship;
								SeaBattle::field_O(3, x, y - 2, 0);
								sh3++;
							}
							else
								cout << "Error!" << endl;
						}
					}

				}

				std::system("cls");
				SeaBattle::showMap();
			}

		}
		if (decks == 4)
		{
			cout << "Enter direcyion: ";
			cin >> direction;
			if (direction == 1)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh4 < 1)
				{
					if (x + 3 < 11)
					{
						map_player[x][y] = ship;
						map_player[x + 1][y] = ship;
						map_player[x + 2][y] = ship;
						map_player[x + 3][y] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x + 1][y] = ship;
						hidden_map_player[x + 2][y] = ship;
						hidden_map_player[x + 3][y] = ship;
						SeaBattle::field_O(4, x, y, 1);
						sh4++;
					}
					else
					{
						if (x + 3 == 11)
						{
							if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 2][y - 1] != ship)
							{
								map_player[x][y] = ship;
								map_player[x - 1][y] = ship;
								map_player[x + 1][y] = ship;
								map_player[x + 2][y] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x - 1][y] = ship;
								hidden_map_player[x + 1][y] = ship;
								hidden_map_player[x + 2][y] = ship;
								SeaBattle::field_O(4, x - 1, y, 1);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
						if (x + 2 == 11)
						{
							if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 2][y - 1] != ship && map_player[x - 3][y - 1] != ship &&
								map_player[x - 3][y + 1] != ship && map_player[x - 3][y] != ship)
							{
								map_player[x][y] = ship;
								map_player[x + 1][y] = ship;
								map_player[x - 1][y] = ship;
								map_player[x - 2][y] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x + 1][y] = ship;
								hidden_map_player[x - 1][y] = ship;
								hidden_map_player[x - 2][y] = ship;
								SeaBattle::field_O(4, x - 2, y, 1);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
						if (x + 1 == 11)
						{
							if (map_player[x - 2][y] != ship && map_player[x - 2][y + 1] != ship &&
								map_player[x - 2][y - 1] != ship && map_player[x - 3][y - 1] != ship &&
								map_player[x - 3][y + 1] != ship && map_player[x - 3][y] != ship &&
								map_player[x - 4][y + 1] != ship && map_player[x - 4][y] != ship && map_player[x - 4][y - 1] != ship)
							{
								map_player[x][y] = ship;
								map_player[x - 3][y] = ship;
								map_player[x - 1][y] = ship;
								map_player[x - 2][y] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x - 3][y] = ship;
								hidden_map_player[x - 1][y] = ship;
								hidden_map_player[x - 2][y] = ship;
								SeaBattle::field_O(4, x - 3, y, 1);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
					}

				}

				std::system("cls");
				SeaBattle::showMap();
			}
			if (direction == 0)
			{
				cout << "Enter coordinate for ships(0 - 9): ";
				cin >> k;
				x = k / 10 + 1;
				y = k % 10 + 1;
				while (map_player[x][y] == ship || map_player[x][y] == 'O')
				{
					cout << "Enter coordinate for ships(0 - 9) map_player[x][y] = ship or map_player[x][y] = 'P' ";
					cin >> k;
					x = k / 10 + 1;
					y = k % 10 + 1;
				}
				if (sh4 < 1)
				{
					if (y + 3 < 11)
					{
						map_player[x][y] = ship;
						map_player[x][y + 1] = ship;
						map_player[x][y + 2] = ship;
						map_player[x][y + 3] = ship;
						hidden_map_player[x][y] = ship;
						hidden_map_player[x][y + 1] = ship;
						hidden_map_player[x][y + 2] = ship;
						hidden_map_player[x][y + 3] = ship;
						SeaBattle::field_O(4, x, y, 0);
						sh4++;
					}
					else
					{
						if (y + 3 == 11)
						{
							if (map_player[x][y - 2] != ship && map_player[x + 1][y - 2] != ship &&
								map_player[x - 1][y - 2] != ship)
							{
								map_player[x][y] = ship;
								map_player[x][y - 1] = ship;
								map_player[x][y + 1] = ship;
								map_player[x][y + 2] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x][y - 1] = ship;
								hidden_map_player[x][y + 1] = ship;
								hidden_map_player[x][y + 2] = ship;
								SeaBattle::field_O(4, x, y - 1, 0);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
						if (y + 2 == 11)
						{
							if (map_player[x][y - 2] != ship && map_player[x + 1][y - 2] != ship &&
								map_player[x - 1][y - 2] != ship && map_player[x - 1][y - 3] != ship &&
								map_player[x + 1][y - 3] != ship && map_player[x][y - 3] != ship)
							{
								map_player[x][y] = ship;
								map_player[x][y + 1] = ship;
								map_player[x][y - 1] = ship;
								map_player[x][y - 2] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x][y + 1] = ship;
								hidden_map_player[x][y - 1] = ship;
								hidden_map_player[x][y - 2] = ship;
								SeaBattle::field_O(4, x, y - 2, 0);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
						if (y + 1 == 11)
						{
							if (map_player[x][y - 2] != ship && map_player[x + 1][y - 2] != ship &&
								map_player[x - 1][y - 2] != ship && map_player[x - 1][y - 3] != ship &&
								map_player[x + 1][y - 3] != ship && map_player[x][y - 3] != ship &&
								map_player[x + 1][y - 4] != ship && map_player[x][y - 4] != ship && map_player[x - 1][y - 4] != ship)
							{
								map_player[x][y] = ship;
								map_player[x][y - 3] = ship;
								map_player[x][y - 1] = ship;
								map_player[x][y - 2] = ship;
								hidden_map_player[x][y] = ship;
								hidden_map_player[x][y - 3] = ship;
								hidden_map_player[x][y - 1] = ship;
								hidden_map_player[x][y - 2] = ship;
								SeaBattle::field_O(4, x, y - 3, 0);
								sh4++;
							}
							else
								cout << "Error!" << endl;
						}
					}

				}

				std::system("cls");
				SeaBattle::showMap();
			}

		}

	}
}

void SeaBattle::whowin()
{
	if (whoWin == false)
	{
		system("cls");
		cout << "PLayer win!!!!" << endl;
	}		
	else
	{
		system("cls");
		cout << "Bot win!!!!" << endl;
	}	
}
