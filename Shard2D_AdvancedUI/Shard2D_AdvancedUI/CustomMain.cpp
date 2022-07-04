#include "CustomMain.h"

using namespace Shard2D;

void CustomMain::Init()
{
	checkbox = new Checkbox();
	AddToStage(checkbox);
	checkbox->x = 20;
	checkbox->y = 20;

	checkbox->CreateTextField("Assets/Fonts/arial.ttf");
	//checkbox->GetTextField()->showDebugRect = true;
	//checkbox->SetEnabled(false);
}

void CustomMain::Update()
{

}
