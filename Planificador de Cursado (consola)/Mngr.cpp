#include "Mngr.h"

Mngr::~Mngr() {
	
}

void Mngr::newCursado(int anIndx, int gpIndx, string matname)
{
	grupos[gpIndx].createMateria();
}
