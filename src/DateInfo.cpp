#include "DateInfo.h"
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

DateInfo::DateInfo() {
    // コンストラクタ：初期化処理があれば記述
}

DateInfo::~DateInfo() {
    // デストラクタ：後片付けがあれば記述
}

std::string DateInfo::getCurrentDate() {
    time_t now = time(nullptr);
    struct tm *localTime = localtime(&now);
    std::ostringstream oss;
    oss << std::put_time(localTime, "%Y-%m-%d");
    return oss.str();
}

std::string DateInfo::getGengo() {
    // 仮実装：西暦2025年の場合、令和7年とする
    return "令和7年";
}

std::string DateInfo::getLeapYearStatus() {
    // 仮実装：2025年は平年とする
    return "平年";
}

std::string DateInfo::getZodiac() {
    // 仮実装：2025年 → 丑年
    return "丑年";
}

std::string DateInfo::getWeekday() {
    time_t now = time(nullptr);
    struct tm *localTime = localtime(&now);
    char buffer[10];
    strftime(buffer, sizeof(buffer), "%A", localTime); // 英語の曜日が出るので、後で日本語変換を検討
    return std::string(buffer);
}

double DateInfo::getYearProgress() {
    // 仮実装：固定値を返す（後で実際の計算に置き換え）
    return 21.3;
}

double DateInfo::getMonthProgress() {
    // 仮実装：固定値
    return 78.5;
}

std::string DateInfo::generateProgressBar(double progress, int barLength) {
    int filledLength = static_cast<int>((progress / 100.0) * barLength);
    std::string bar;
    for (int i = 0; i < filledLength; i++) {
        bar += "█";  // 塗りつぶしキャラクター
    }
    for (int i = filledLength; i < barLength; i++) {
        bar += "-";
    }
    return bar;
}
