#include "Common.h"

bool Extension::LeftTop(int type)
{
	return currentX[type] == 0 && currentY[type] == 0;
}
bool Extension::LeftMiddle(int type)
{
	return currentX[type] == 0 && currentY[type] > 0 && currentY[type] < boxHeight;
}
bool Extension::LeftBottom(int type)
{
	return currentX[type] == 0 && currentY[type] == boxHeight;
}

bool Extension::MiddleTop(int type)
{
	return currentX[type] > 0 && currentY[type] == 0 && currentX[type] < boxWidth;
}
bool Extension::MiddleMiddle(int type)
{
	return currentX[type] > 0 && currentY[type] > 0 && currentY[type] < boxHeight && currentX[type] < boxWidth;
}
bool Extension::MiddleBottom(int type)
{
	return currentX[type] > 0 && currentY[type] == boxHeight && currentX[type] < boxWidth;
}

bool Extension::RightTop(int type)
{
	return currentY[type] == 0 && currentX[type] == boxWidth;
}
bool Extension::RightMiddle(int type)
{
	return currentY[type] > 0 && currentY[type] < boxHeight && currentX[type] == boxWidth;
}
bool Extension::RightBottom(int type)
{
	return currentY[type] == boxHeight && currentX[type] == boxWidth;
}
