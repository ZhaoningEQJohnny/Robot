
#include "pch.h"
#include <iostream>
#include "Robot.h"

using namespace std;
Robot::Robot()
{
	//default
}

int Robot::getXr() const
{
	return xr;
}
bool Robot::setXr(int x)
{
	xr = x;
	return true;
}
int Robot::getYr() const
{
	return yr;
}
bool Robot::setYr(int y)
{
	yr = y;
	return true;
}
int  Robot::getXt() const
{
	return xt;
}
bool Robot::setXt(int x)
{
	xt = x;
	return true;
}
int Robot::getYt() const
{
	return yt;
}
bool Robot::setYt(int y)
{
	yt = y;
	return true;
}

//get robot paths, recursion method
vector<string> Robot::GetPath(int xr, int yr, int xt, int yt, string dir)
{
	//get short distance
	int disX;
	int disY;
	disX = abs(xr - xt);
	disY = abs(yr - yt);
	if (disX == 0 && disY == 0)
	{
		paths.push_back(dir);
		return paths;
	}
	else
	{
		//N
		if (abs((yr + 1) - yt) < disY)
		{
			GetPath(xr, yr + 1, xt, yt, dir + 'N');
		}
		//S
		if (abs((yr - 1) - yt) < disY)
		{
			GetPath(xr, yr - 1, xt, yt, dir + 'S');
		}
		//E
		if (abs((xr + 1) - xt) < disX)
		{
			GetPath(xr + 1, yr, xt, yt, dir + 'E');
		}
		//W
		if (abs((xr - 1) - xt) < disX)
		{			
			GetPath(xr - 1, yr, xt, yt, dir + 'W');
		}
		return paths;
	}

	

}

