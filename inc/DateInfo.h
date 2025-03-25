#ifndef DATEINFO_H
#define DATEINFO_H

#include <string>

class DateInfo {
public:
    DateInfo();
    ~DateInfo();

    std::string getCurrentDate();   // 例："2025-03-24"
    std::string getGengo();         // 例："令和7年"
    std::string getLeapYearStatus(); // 例："平年" or "うるう年"
    std::string getZodiac();         // 例："丑年"
    std::string getWeekday();        // 例："月曜日"
    double getYearProgress();        // 年進捗率（数値）
    double getMonthProgress();       // 月進捗率（数値）
    std::string generateProgressBar(double progress, int barLength = 30);

    // 追加のメソッドも随時実装可能
};

#endif // DATEINFO_H
