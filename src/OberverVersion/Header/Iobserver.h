#ifndef IOBSERVER_H
#define IOBSERVER_H
class Iobserver
{
public:
virtual void PlayerAttack() =0;
virtual ~Iobserver() = default;
};

#endif // !1