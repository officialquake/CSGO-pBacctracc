//V1RuS | 2018, July 2nd
#pragma once
#include "main.h"


struct lbyRecords
{
    int tick_count;
    float lby;
    Vector headPosition;
};
struct backtrackData
{
    float simtime;
    Vector hitboxPos;
};

class BackTrack
{
    int latest_tick;
    bool IsTickValid(int tick);
    void UpdateRecord(int i);
public:
    lbyRecords records[64];
    bool RunLBYBackTrack(int i, CUserCmd* cmd, Vector& aimPoint);
    void Update(int tick_count);
    void legitBackTrack(CUserCmd* cmd, C_BaseEntity* pLocal);
};

extern backtrackData headPositions[64][12];

extern BackTrack* backtracking;
