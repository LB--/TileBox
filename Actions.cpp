#include "Common.h"

void Extension::SetTileWidth(int pixels)
{
	tileWidth = pixels;
}
void Extension::SetTileHeight(int pixels)
{
	tileHeight = pixels;
}
void Extension::SetBoxWidth(int tiles)
{
	boxWidth = tiles - 1;
}
void Extension::SetBoxHeight(int tiles)
{
	boxHeight = tiles - 1;
}

void Extension::SetStart(int x, int y)
{
	startX = x;
	startY = y;
}

void Extension::GenerateBox(int curType)
{
	for(int x = 0; x <= boxWidth; ++x)
	{
		for(int y = 0; y <= boxHeight; ++y)
		{
			currentY[curType] = y;
			currentX[curType] = x;
			if(y == 0 && x == 0)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(0);
			}
			if(x == 0 && y > 0 && y < boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(1);
			}
			if(x==0 && y == boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(2);
			}
			if(x > 0 && x < boxWidth && y == 0)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(3);
			}
			if(x > 0 && x < boxWidth && y > 0 && y < boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(4);
			}
			if(x > 0 && x < boxWidth && y == boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(5);
			}
			if(x == boxWidth && y == 0)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(6);
			}
			if(x == boxWidth && y > 0 && y < boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(7);
			}
			if(x == boxWidth && y == boxHeight)
			{
				lastX = startX + tileWidth * x;
				lastY = startY + tileHeight * y;
				Runtime.GenerateEvent(8);
			}
		}
	}

	currentX[curType] = -1;
	currentY[curType] = -1;
}
