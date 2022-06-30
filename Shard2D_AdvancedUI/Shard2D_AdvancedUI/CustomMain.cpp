#include "CustomMain.h"

using namespace Shard2D;

void CustomMain::Init()
{
	checkbox = new Checkbox();
	AddToStage(checkbox);
	checkbox->x = 200;
	checkbox->y = 200;
}

void CustomMain::Update()
{
}
