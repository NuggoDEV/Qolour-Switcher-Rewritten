#pragma once

#include "config-utils/shared/config-utils.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;

DECLARE_CONFIG(ModConfig, 
    CONFIG_VALUE(DidUserCrash, bool, "If the user crashes before results screen", false);
    CONFIG_VALUE(ColoursChanged, bool, "When a Colour Gets Changed", false);
    CONFIG_VALUE(BombColour, Color, "", Color(0.1, 0.1, 0.1, 0.5));

    CONFIG_VALUE(LeftStart, Color, "Left Saber Level Start Value", Color(1, 0, 0, 1));
    CONFIG_VALUE(RightStart, Color, "Right Saber Level Start Value", Color(0, 0, 1, 1));
    CONFIG_VALUE(BombStart, Color, "Bomb Level Start Value", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(WallStart, Color, "Wall Level Start Value", Color(0.7, 0, 0, 1));

    CONFIG_VALUE(TimedSwitch1, bool, "First Timed Switch Toggle", false);
    CONFIG_VALUE(TimedSwitch2, bool, "Second Timed Switch Toggle", false);
    CONFIG_VALUE(TimedSwitch3, bool, "Third Timed Switch Toggle", false);
    CONFIG_VALUE(TimedSwitch4, bool, "Fourth Timed Switch Toggle", false);

    CONFIG_VALUE(TimedSwitch1Int, int, "First Timed Switch Time", 0);
    CONFIG_VALUE(TimedSwitch2Int, int, "Second Timed Switch Time", 0);
    CONFIG_VALUE(TimedSwitch3Int, int, "Third Timed Switch Time", 0);
    CONFIG_VALUE(TimedSwitch4Int, int, "Fourth Timed Switch Time", 0);

    CONFIG_VALUE(TimedSwitch1LNColour, Color, "First Left Note Colour", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(TimedSwitch1RNColour, Color, "First Right Note Colour", Color(0.1, 0.1, 0.1, 1));

    CONFIG_VALUE(TimedSwitch2LNColour, Color, "Second Left Note Colour", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(TimedSwitch2RNColour, Color, "Second Right Note Colour", Color(0.1, 0.1, 0.1, 1));

    CONFIG_VALUE(TimedSwitch3LNColour, Color, "Third Left Note Colour", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(TimedSwitch3RNColour, Color, "Third Right Note Colour", Color(0.1, 0.1, 0.1, 1));

    CONFIG_VALUE(TimedSwitch4LNColour, Color, "Fourth Left Note Colour", Color(0.1, 0.1, 0.1, 1));
    CONFIG_VALUE(TimedSwitch4RNColour, Color, "Fourth Right Note Colour", Color(0.1, 0.1, 0.1, 1));
    
    CONFIG_INIT_FUNCTION(
        CONFIG_INIT_VALUE(DidUserCrash);
        CONFIG_INIT_VALUE(ColoursChanged);
        CONFIG_INIT_VALUE(BombColour);

        CONFIG_INIT_VALUE(LeftStart);
        CONFIG_INIT_VALUE(RightStart);
        CONFIG_INIT_VALUE(BombStart);
        CONFIG_INIT_VALUE(WallStart);

        CONFIG_INIT_VALUE(TimedSwitch1);
        CONFIG_INIT_VALUE(TimedSwitch2);
        CONFIG_INIT_VALUE(TimedSwitch3);
        CONFIG_INIT_VALUE(TimedSwitch4);

        CONFIG_INIT_VALUE(TimedSwitch1Int);
        CONFIG_INIT_VALUE(TimedSwitch2Int);
        CONFIG_INIT_VALUE(TimedSwitch3Int);
        CONFIG_INIT_VALUE(TimedSwitch4Int);

        CONFIG_INIT_VALUE(TimedSwitch1LNColour);
        CONFIG_INIT_VALUE(TimedSwitch1RNColour);

        CONFIG_INIT_VALUE(TimedSwitch2LNColour);
        CONFIG_INIT_VALUE(TimedSwitch2RNColour);

        CONFIG_INIT_VALUE(TimedSwitch3LNColour);
        CONFIG_INIT_VALUE(TimedSwitch3RNColour);

        CONFIG_INIT_VALUE(TimedSwitch4LNColour);
        CONFIG_INIT_VALUE(TimedSwitch4RNColour);

    )
)