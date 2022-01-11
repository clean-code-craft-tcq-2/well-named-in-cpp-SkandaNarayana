#include "wirePairColorCoder.h"

namespace TelCoColorCoder
{
    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
    majorColor(major), minorColor(minor) {}

    MajorColor ColorPair::getMajor() {
        return majorColor;
    }

    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
                (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
                (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    void printReferenceManual(){
        int pairNumber = 1;
        std::cout << "Printing the reference manual for wire colour code in the below format"<< "\n";
        std::cout << "Major colour - Minor colour - Pair number" << std::endl;
        for (size_t majorColorIndex = 0; majorColorIndex < TelCoColorCoder::numberOfMajorColors; ++majorColorIndex) {
            for (size_t minorColorIndex = 0; minorColorIndex < TelCoColorCoder::numberOfMinorColors; ++minorColorIndex) {
                std::cout << TelCoColorCoder::MajorColorNames[majorColorIndex] << " - ";
                std::cout << TelCoColorCoder::MinorColorNames[minorColorIndex] << " - ";
                std::cout <<  pairNumber << std::endl;
                pairNumber++;
            }
        }
    }
}
