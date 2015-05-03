#include <vector>
#define WIDTH 304
#define HEIGHT 240

#pragma once


class champMarkov
{
public:
	int mAfter[HEIGHT][WIDTH];
	champMarkov(int(*)[WIDTH]);
	~champMarkov();
};

