#include "ActionAddnotes.h"
#include "Registrar.h"
#include "Courses/UnivCourse.h"

#include <iostream>
ActionAddnotes::ActionAddnotes(Registrar* p) :Action(p)
{
}

bool ActionAddnotes::Execute()
{
	GUI* pGUI = pReg->getGUI();

	pGUI->PrintMsg("Add notes : ");
	

	ActionData actData = pGUI->GetUserAction("write your notes here ");
	

	/*const double x = 50;
		 const double y = 80;
		 */
		 
	
		graphicsInfo gInfo{ x, y };
	}


	


	return true;
}


ActionAddnotes::~ActionAddnotes()
{
}