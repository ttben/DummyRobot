using namespace std;

#ifndef __Invocateur_h__
#define __Invocateur_h__

#include <vector>
#include <exception>

class Invocateur
{

	public: virtual int getInt() = 0;

	public: virtual string getString() = 0;

	protected:
        string current_line;
};

#endif
