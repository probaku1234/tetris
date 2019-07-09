#pragma once
#include <iostream>

using namespace std;

class GameManager
{
private:
	int nScreenWidth;			// Console Screen Size X (columns)
	int nScreenHeight;			// Console Screen Size Y (rows)
	wstring tetromino[7];
	int nFieldWidth;
	int nFieldHeight;
	unsigned char *pField;
	int Rotate(int px, int py, int r);
	bool DoesPieceFit(int nTetromino, int nRotation, int nPosX, int nPosY);

public:
	GameManager();
	~GameManager();
	void run();
};