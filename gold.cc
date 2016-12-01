#include "gold.h"

Gold::Gold(int x, int y, Floor *grid, int value): GameObject(x, y, 'G', grid), value(value) {
	if(value == 6) {
		pickable = false;
	}
	else {
		pickable = true;
	}
}

Gold::~Gold(){}

void Gold::setGold(int gold) {
	value = gold;
}
int Gold::getGold() {
	return value;
}
void Gold::setPickable(bool value) {
	pickable = value;
}
bool Gold::getPickable() {
	return pickable;
}
