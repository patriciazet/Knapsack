#pragma once
#include <iostream>

struct Item
{
	int weight; 
	int value;
};

class Shop
{
	Item items[10];
public:
	Shop(); 
	Item steal(int index); 
	Item peek(int index); 
	Item* getItems() const;
};

class Backpack
{
	const int capacity; 
	Item stolen[10];
	int currentCapacity = 0;
	int firstAvailableIndex = 0;
	
public:
	Backpack(int capacity); 
	int calculateCurrentValue() const; 
	int put(Item item); 
	Item* getItems() const;
	bool fits(int weight);
};

class Robber
{
	Backpack backpack; 
public:
	Robber(int capacity); 
	
	void robWhatever(Shop& shop); 
	int getValue();
	Item* getBackpackItems() const;
};

std::ostream& operator<<(std::ostream& s, const Robber& r);
std::ostream& operator<<(std::ostream& s, const Shop& r);
