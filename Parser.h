#include <exception>
#include <string>
using namespace std;

#ifndef __Parser_h__
#define __Parser_h__

#include "Invocateur.h"

// __interface Invocateur;
class Parser;

class Parser: public Invocateur
{

	public: void load(File file);

	public: string getNomCommande(string ligne);

	public: void getInt();

	public: void getString();
};

#endif
