#pragma once

#include <stdint.h>
#include <malloc.h>
#include <cstdlib>
#include "arcdps_datastructures.h"
#include "npc_ids.h"

int split (const char *str, char c, char ***arr);
bool isPlayer(ag* new_player);

struct GameState
{
    bool boss_found;
    Boss boss_data;
};
