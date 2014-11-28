
using namespace std;

#ifndef __Parser_h__
#define __Parser_h__

#include "Invocateur.h"
#include <exception>
#include <string>
#include <vector>

class Parser: public Invocateur
{

	public: void load(string file);

	public: string getNomCommande(string ligne);

	public: void getInt();

	public: void getString();
	vector<string> split(string str,string sep);

};

#endif
