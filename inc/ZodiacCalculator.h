#ifndef ZODIACCALCULATOR_H
#define ZODIACCALCULATOR_H

#include <string>

class ZodiacCalculator {
public:
    ZodiacCalculator();
    ~ZodiacCalculator();

    std::string calculateZodiac(int year);
    // さらに複雑な処理を追加するためのプライベートメソッドなども定義可能
};

#endif // ZODIACCALCULATOR_H
