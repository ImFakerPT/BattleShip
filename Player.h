#pragma once
#include "Board.h" 
#include "Navalpoint.h"
#include "Boat.h"
#include "Bot.h"
using namespace std;
class Player
{
private:
	string name;
	Board T;
	Boat MB[4];
	Navalpoint shots[100];
public:
	Player();
	~Player();
	Board* GetBoard() { return &T; }
	string SetName(string _name) { name = _name; }
	string GetName() { return name; }
	Boat* Getboat() { return MB; }
	Board* getBoard() { return &T; }
	void Place(Board *T2, Bot B);
	void Shoot(Board* Oponent, Bot B);
	void Save(std::string file, Board* oponent);
	void ReadShots(std::string file, Board* oponent);
	void Read(std::string file, Board* oponent);
	void WinningCondition(std::string file, Board* oponent);
	void Stats();
};
