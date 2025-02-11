#ifndef DEADRULES_H_
#define DEADRULES_H_

#include "rules.h"

class DeadRules: public Rules {
public:
	DeadRules();
	virtual ~DeadRules();
	bool Apply(const unsigned short neighbors);
};

#endif /* DEADRULES_H_ */
