
class Extension
{
public:
	RD *rd;
	RunHeader *rh;
	Edif::Runtime Runtime;

	static const int MinimumBuild = 257;
	static const int Version = 2;

	static const int OEFLAGS = OEFLAG_VALUES|OEFLAG_RUNBEFOREFADEIN|OEFLAG_NEVERKILL;
	static const int OEPREFS = 0;

	static const int WindowProcPriority = 100;

	Extension(RD *rd, SerializedED *SED, createObjectInfo *COB);
	~Extension();

	int boxWidth;
	int boxHeight;
	int startX;
	int startY;
	int tileWidth;
	int tileHeight;
	int currentX[100];
	int currentY[100];
	int lastX;
	int lastY;

	//Actions
	void SetTileWidth(int pixels);
	void SetTileHeight(int pixels);
	void SetBoxWidth(int tiles);
	void SetBoxHeight(int tiles);
	void SetStart(int x, int y);
	void GenerateBox(int curType);

	//Conditions
	bool LeftTop(int type);
	bool LeftMiddle(int type);
	bool LeftBottom(int type);
	bool MiddleTop(int type);
	bool MiddleMiddle(int type);
	bool MiddleBottom(int type);
	bool RightTop(int type);
	bool RightMiddle(int type);
	bool RightBottom(int type);

	//Expressions
	int LastX();
	int LastY();

	short Handle();
	short Display();

	short Pause();
	short Continue();

	bool Save(HANDLE File);
	bool Load(HANDLE File);

	void Action(int ID, RD *rd, long param1, long param2);
	long Condition(int ID, RD *rd, long param1, long param2);
	long Expression(int ID, RD *rd, long param);
};
