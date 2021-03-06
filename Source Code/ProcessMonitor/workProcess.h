
#ifndef __WORKPROCESS_H__
#define __WORKPROCESS_H__
/*******************************************************************
	Author: Bob Limnor (bob@limnor.com, aka Wei Ge)
	Last modified: 03/31/2018
	Allrights reserved by Bob Limnor

********************************************************************/

#define SHORTMESSAGESIZE 512
typedef void (*fnProgressReport)(char *message, bool sameline);

//for monitoring progress
class SimulationExecuter
{
public:
	virtual void onMoveForwardFinished()=0;
};
#endif