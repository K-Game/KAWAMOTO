#pragma once

enum {
	PWAIT_L,
	PWAIT_R,
	PMOVE_L,
	PMOVE_R,
};
enum {
	P_ALIVE,
	P_DEAD,
};


class Player {
private:
	Player();
	~Player();

public:


	//ƒVƒXƒeƒ€
	void Init();
	void Undeta();
	void Render();

	//‹““®
	void PMove();
	void DeadCheck();

	void PShot();

};