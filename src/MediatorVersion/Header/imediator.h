#ifndef IMEDIATOR_H
#define IMEDIATOR_H

class imediator {
public:
    virtual void notifyAttack() = 0;
    virtual ~imediator() {}
};

#endif