#pragma once
#ifndef Q1
#define Q1

class SeaBattle
{
private:
	int ships1, ships2, ships3, ships4;
	char ship = 'H';
	char shot = '*';
	char P = 'P';
	char O = 'O';
	char map_player[12][12];
	char map_bot[12][12];
	char hidden_map_bot[12][12];
	char hidden_map_player[12][12];


	bool whoseStep;
	bool whoWin;
	int check_Ships(int  x, int  y, int direction); // b - bot, p - player
	int checkShipCells_1(int x, int y, int q, int direction);
	void field_P(int i, int x, int y, int direction);//field arond the ship
	void field_O(int i, int x, int y, int direction);//field arond the ship
	void setShips_Bot();
public:
	SeaBattle();
	~SeaBattle(){}
	void showMap();
	void Shot();
	void setShips_Player();
	void whowin();
	void whoStep(bool l) { whoseStep = l; }
};
#endif // !Q1
