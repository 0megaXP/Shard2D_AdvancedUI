#include <ShardKickstart.h>
#include "CustomMain.h"

int main()
{
    Shard2D::IMain* customMain = new CustomMain();
    Shard2D::Init(customMain);
    delete(customMain);
}