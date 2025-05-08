// iobserver.h
#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <string>

class IObserver {
public:
    virtual std::string onplayerattack() = 0;
    virtual ~IObserver() {}
};

#endif
