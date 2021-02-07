#ifndef ITEM2
#define ITEM2


class Game
{
	static const double acceleration;
	double gravity;
public:
	Game(double g = acceleration) :gravity(acceleration) {}
	~Game() {}
};






#endif