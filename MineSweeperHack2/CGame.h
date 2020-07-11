#pragma once
class CGame;

class CGame {
public:
	__int32 isGameRunning; //0x0000  
	char unknown4[44]; //0x0004
	__int32 bombsLeft; //0x0030  
	char unknown52[1540]; //0x0034
	__int32 timeElapsed; //0x0638  
	char unknown1596[4]; //0x063C
	__int32 tilesCleared; //0x0640  
	char unknown1604[508]; //0x0644
}; //Size=0x0840(2112)

extern CGame* cGame;