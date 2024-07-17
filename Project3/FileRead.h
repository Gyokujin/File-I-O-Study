#pragma once
#include <iostream>
#include <fstream>
using namespace std;

extern char monsterName[50];
extern unsigned int atk;
extern unsigned int hp;
extern unsigned int speed;

void FileRead();
void PrintInfo();