#include <ShardKickstart.h>

#include "src/Checkbox/Checkbox.h"

class CustomMain : public Shard2D::IMain
{
private:
	void Init();
	void Update();

	Shard2D::Checkbox* checkbox;
};