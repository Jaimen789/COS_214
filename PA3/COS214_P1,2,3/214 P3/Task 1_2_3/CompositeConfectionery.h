#ifndef COMPOSITECONFECTIONERY_H
#define COMPOSITECONFECTIONERY_H

#include <list>
#include <iostream>

#include "ConfectioneryFactory.h"

class CompositeConfectionery : public ConfectioneryFactory {

public:
    CompositeConfectionery() : ConfectioneryFactory(), _l() {}

    void addConfectionery(Confectionery* c) {
        ._l.push_back(c);
    }

    void removeConfectionery(Confectionery* c);
    
    void print() {
        for (std::list<Confectionery*>::iterator it = _l.begin(); it != _l.end(); ++it) {
            (*it)->print();
        }
    }

    ~CompositeConfectionery() {
        for (std::list<Confectionery*>::iterator it = _l.begin(); it != _l.end(); ++it) {
            delete *it;
        }
    }

private:
    std::list<Confectionery*> _l;

};

#endif