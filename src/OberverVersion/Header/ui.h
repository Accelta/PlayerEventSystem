#ifndef UI_H
#define UI_H

#include "IObserver.h"

class ui : public Iobserver {
public:
    void PlayerAttack() override;
};

#endif
