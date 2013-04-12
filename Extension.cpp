#include "Common.h"

Extension::Extension(RD *rd, SerializedED *SED, createObjectInfo *COB) : rd(rd), rh(rd->rHo.hoAdRunHeader), Runtime(rd)
{
	LinkAction(0, SetTileWidth);
	LinkAction(1, SetTileHeight);
	LinkAction(2, SetBoxWidth);
	LinkAction(3, SetBoxHeight);
	LinkAction(4, SetStart);
	LinkAction(5, GenerateBox);

	LinkCondition(0, LeftTop);
	LinkCondition(1, LeftMiddle);
	LinkCondition(2, LeftBottom);
	LinkCondition(3, MiddleTop);
	LinkCondition(4, MiddleMiddle);
	LinkCondition(5, MiddleBottom);
	LinkCondition(6, RightTop);
	LinkCondition(7, RightMiddle);
	LinkCondition(8, RightBottom);

	LinkExpression(0, LastX);
	LinkExpression(1, LastY);


	for(size_t i = 0; i < 100; i++)
	{
		currentX[i] = -1;
		currentY[i] = -1;
	}
}
Extension::~Extension()
{
}

short Extension::Handle()
{
	return REFLAG_ONESHOT;
}
short Extension::Display()
{
	return 0;
}

short Extension::Pause()
{
	return 0;
}
short Extension::Continue()
{
	return 0;
}

bool Extension::Save(HANDLE File)
{
	//needs implementing
	return false;
}
bool Extension::Load(HANDLE File)
{
	//needs implementing
	return false;
}

void Extension::Action(int ID, RD *rd, long param1, long param2)
{
}
long Extension::Condition(int ID, RD *rd, long param1, long param2)
{
	return false;
}
long Extension::Expression(int ID, RD *rd, long param)
{
	return long(_T(""));
}
