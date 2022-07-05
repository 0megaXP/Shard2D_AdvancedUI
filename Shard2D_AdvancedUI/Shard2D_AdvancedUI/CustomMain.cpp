#include "CustomMain.h"

using namespace Shard2D;

void CustomMain::Init()
{
	checkbox = new Checkbox();
	AddToStage(checkbox);
	checkbox->x = 20;
	checkbox->y = 30;

	checkbox->CreateTextField("Assets/Fonts/arial.ttf");
	//checkbox->GetTextField()->showDebugRect = true;

	dropdown = new Dropdown();
	AddToStage(dropdown);
	dropdown->x = 20;
	dropdown->y = 60;

	dropdown->CreateTextField("Assets/Fonts/arial.ttf");
	//dropdown->GetTextField()->showDebugRect = true;
	//checkbox->SetEnabled(false);
}

void CustomMain::Update()
{

}
