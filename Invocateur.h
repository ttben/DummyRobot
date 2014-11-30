using namespace std;

#ifndef __Invocateur_h__
#define __Invocateur_h__

#include <vector>
#include <exception>

#include "Objet.h"
#include "Plot.h"

class Invocateur
{

	public: virtual int getInt() = 0;

	public: virtual string getString() = 0;
virtual Plot* getPlot() = 0;

	public: virtual Plot getPlot() = 0;

	public: virtual Objet getObjet() = 0;

	protected:
        string current_line;
};

#endif
