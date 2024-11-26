#pragma once 
#include <iostream> 
#include <string> 
using namespace std;

class PC
{
protected:
	string name;
	string cpu;
	string gpu;
	string ssd;
	string ram;
	double price;
public:
	PC() {};
	PC(string n, string c, string g, string s, string r)
	{
		name = n;
		cpu = c;
		gpu = g;
		ssd = s;
		ram = r;
		price = 0.0;
	}
	virtual void Print()
	{
		cout << "Name: " << name << "\t CPU: " << cpu << "\tGPU: " << gpu << "\tSSD" << ssd << "\tRAM: " << ram << endl;
	}
	virtual double GetPrice()
	{
		return price;
	}
};

class OfficePC :public PC
{
	string micro;
public:
	OfficePC() {};
	OfficePC(string n, string c, string g, string s, string r, string m) :PC(n, c, g, s, r)
	{
		micro = m;
	}
	void Print()
	{
		PC::Print();
		cout << "Micrphone: " << micro << endl;
	}
	double GetPrice()
	{
		price = 30000 + (micro.length() * 1000);
		return price;
	}
};

class GamePC :public PC
{
	string keyboard;
	string headphones;
public:
	GamePC() {};
	GamePC(string n, string c, string g, string s, string r, string k, string h) :PC(n, c, g, s, r)
	{
		keyboard = k;
		headphones = h;
	}
	void Print()
	{
		PC::Print();
		cout << "Keyboard: " << keyboard << "\tHeadphones: " << headphones << endl;
	}
	double GetPrice()
	{
		price = 60000 + (keyboard.length() + headphones.length()) * 1000;
		return price;
	}
};

class HomePC :public PC
{
	string camera;
public:
	HomePC() {};
	HomePC(string n, string c, string g, string s, string r, string camera) :PC(n, c, g, s, r)
	{
		this->camera = camera;
	}
	void Print()
	{
		PC::Print();
		cout << "Camera: " << camera << endl;
	}
	double GetPrice()
	{
		price = 45000 + (camera.length() * 1000);
		return price;
	}
};
