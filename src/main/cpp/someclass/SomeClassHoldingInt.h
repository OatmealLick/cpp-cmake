//
// Created by lick on 16.06.17.
//

#ifndef AUDIO_STARTER_SOMECLASSHOLDINGINT_H
#define AUDIO_STARTER_SOMECLASSHOLDINGINT_H


class SomeClassHoldingInt {
public:
    SomeClassHoldingInt(int num) : int_(num) {}
    const int getInt() const { return int_; }
private:
    int int_;
};


#endif //AUDIO_STARTER_SOMECLASSHOLDINGINT_H
