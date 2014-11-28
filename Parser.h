
using namespace std;

#ifndef __Parser_h__
#define __Parser_h__

#include "Invocateur.h"
#include <exception>
#include <string>
#include <vector>

class Parser: public Invocateur
{

    private: string current_line;
	public: void load(string file);
    public : void updateString(vector<string> elems);
	public: string getNomCommande(string ligne);

	public: int getInt();

	public: string getString();
	vector<string> split(string str,string sep);

};

#endif
