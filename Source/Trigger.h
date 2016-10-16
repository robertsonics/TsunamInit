// **************************************************************************
//     Filename: TRIGGER.H
// Date Created: 9/14/2013
//      Version: 0.01
//
//
//  COPYRIGHT (c) Robertsonics 2013. All Rights Reserved
//
// **************************************************************************

#ifndef __TRIGGER_H_3000605__
#define __TRIGGER_H_3000605__

#include "../JuceLibraryCode/JuceHeader.h"

class Trigger {

public:
	Trigger();
	~Trigger();

	void setFunction(int i);
	void setType(int i);
	void setInvert(bool b);
	void setPoly(bool b);
	void setLow(String s);
	void setHigh(String s);

	int getFunction(void);
	int getType(void);
	bool getInvert(void);
	bool getPoly(void);
	int getLow(void);
	int getHigh(void);
			
private:

}; // end class Trigger

#endif
