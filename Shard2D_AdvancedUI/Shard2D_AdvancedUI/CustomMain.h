#include <ShardKickstart.h>

#include "src/Checkbox/Checkbox.h"
#include "src/Dropdown/Dropdown.h"

class CustomMain : public Shard2D::IMain
{
private:
	void Init();
	void Update();

	Shard2D::Checkbox* checkbox;
	Shard2D::Dropdown* dropdown;
};