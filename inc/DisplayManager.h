#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H

#include <string>
#include "DateInfo.h"
#include "ZodiacCalculator.h"

class DisplayManager {
public:
    DisplayManager();
    ~DisplayManager();

    void displayInfo();  // 標準出力とログファイルに情報を出力
private:
    DateInfo dateInfo;
    ZodiacCalculator zodiacCalc;
    void writeLog(const std::string &message);
};

#endif // DISPLAYMANAGER_H
