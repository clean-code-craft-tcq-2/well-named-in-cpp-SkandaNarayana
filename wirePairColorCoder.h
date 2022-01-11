#ifndef WELL_NAMED_IN_CPP_SKANDANARAYANA_TELCOCOLORCODER_H
#define WELL_NAMED_IN_CPP_SKANDANARAYANA_TELCOCOLORCODER_H
#include <iostream>

namespace TelCoColorCoder {
    enum MajorColor {
        WHITE, RED, BLACK, YELLOW, VIOLET
    };
    enum MinorColor {
        BLUE, ORANGE, GREEN, BROWN, SLATE
    };

    static char *MajorColorNames[] = {
            "White", "Red", "Black", "Yellow", "Violet"
    };
    static int numberOfMajorColors =
            sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    static const char *MinorColorNames[] = {
            "Blue", "Orange", "Green", "Brown", "Slate"
    };
    static int numberOfMinorColors =
            sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor);

        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    ColorPair GetColorFromPairNumber(int pairNumber);
}


#endif //WELL_NAMED_IN_CPP_SKANDANARAYANA_TELCOCOLORCODER_H
