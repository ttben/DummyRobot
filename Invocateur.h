#include <exception>
using namespace std;

#ifndef __Invocateur_h__
#define __Invocateur_h__

__interface Invocateur;

__interface Invocateur
{

	public: virtual void getInt() = 0;

	public: virtual void getString() = 0;
};

#endif
