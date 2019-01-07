#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Robot
{
public:

	//constructor
	Robot();
	//getter&setter
	int getXr() const;
	bool setXr(int x);
	int getYr() const;
	bool setYr(int y);
	int getXt() const;
	bool setXt(int x);
	int getYt() const;
	bool setYt(int y);
	
	//get robot paths, recursion method
	vector<string> GetPath(int xr, int yr, int xt, int yt, string dir);

	int CalShortestPath(int xr, int yr, int xt, int yt);

private:
	//field
	int xr;
	int yr;
	int xt;
	int yt;
	vector<string> paths;
};
