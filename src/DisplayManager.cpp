#include "DisplayManager.h"
#include <iostream>
#include <fstream>
#include <ctime>

DisplayManager::DisplayManager() {
    // 必要な初期化があれば
}

DisplayManager::~DisplayManager() {
    // 後片付けがあれば
}

void DisplayManager::displayInfo() {
    // DateInfo の結果を取得
    std::string currentDate = dateInfo.getCurrentDate();
    std::string gengo = dateInfo.getGengo();
    std::string leapStatus = dateInfo.getLeapYearStatus();
    std::string zodiac = zodiacCalc.calculateZodiac(2025); // 仮に2025年を使う
    std::string weekday = dateInfo.getWeekday();
    double yearProgress = dateInfo.getYearProgress();
    double monthProgress = dateInfo.getMonthProgress();
    std::string yearBar = dateInfo.generateProgressBar(yearProgress);
    std::string monthBar = dateInfo.generateProgressBar(monthProgress);

    // 標準出力への出力
    std::cout << "[INFO] 今日の日付: " << currentDate << std::endl;
    std::cout << "[INFO] 元号換算: " << gengo << std::endl;
    std::cout << "[INFO] うるう年判定: " << leapStatus << std::endl;
    std::cout << "[INFO] 干支: " << zodiac << std::endl;
    std::cout << "[INFO] 曜日: " << weekday << std::endl;
    std::cout << "[INFO] 年進捗率: " << yearProgress << "% [" << yearBar << "]" << std::endl;
    std::cout << "[INFO] 月進捗率: " << monthProgress << "% [" << monthBar << "]" << std::endl;

    // ログファイルへの出力
    // タイムスタンプを取得
    time_t now = time(nullptr);
    char timeStr[20];
    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", localtime(&now));

    std::ofstream ofs("date_info.log", std::ios::app);
    ofs << timeStr << " - [INFO] 今日の日付: " << currentDate << std::endl;
    ofs << timeStr << " - [INFO] 元号換算: " << gengo << std::endl;
    ofs << timeStr << " - [INFO] うるう年判定: " << leapStatus << std::endl;
    ofs << timeStr << " - [INFO] 干支: " << zodiac << std::endl;
    ofs << timeStr << " - [INFO] 曜日: " << weekday << std::endl;
    ofs << timeStr << " - [INFO] 年進捗率: " << yearProgress << "% [" << yearBar << "]" << std::endl;
    ofs << timeStr << " - [INFO] 月進捗率: " << monthProgress << "% [" << monthBar << "]" << std::endl;
    ofs.close();
}

void DisplayManager::writeLog(const std::string &message) {
    // 必要なら、ここに個別ログ書き出し処理を実装
    // 今回は displayInfo() 内で一括出力しているので未使用
}
