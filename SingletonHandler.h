#include <exception>
using namespace std;



#ifndef __SingletonHandler_h__
#define __SingletonHandler_h__

#include <iostream>
#include <map>
#include "EtatRobot.h"


class SingletonHandler
{
	public:

	    typedef map<string, EtatRobot&> MapSingleton;
	    static MapSingleton _singletons;


//	    static void ajouterSingleton(string nom, EtatRobot instance);
//
//        static bool existe(string nom);
//
//        static EtatRobot recupererInstance(string nom);

	    static void ajouterSingleton(string nom, EtatRobot& instance) {
	        dump_map(SingletonHandler::_singletons);
            SingletonHandler::_singletons.insert(pair<string,EtatRobot&>(nom, instance));
            dump_map(SingletonHandler::_singletons);
        }

        static bool existe(string nom) {


            return SingletonHandler::_singletons.count(nom) != 0;
        }

        static EtatRobot& recupererInstance(string nom) {
            return SingletonHandler::_singletons.at(nom);
        }

        static void dump_map(const map<string, EtatRobot&>& map) {
            for ( std::map<string,EtatRobot&>::const_iterator it = map.begin(); it != map.end(); it++) {
                cout << "Key: " << it->first << endl;
                cout << "Values" << it->second << endl;
            }
    }
};


#endif
