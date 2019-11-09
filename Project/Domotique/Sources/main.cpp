#include <list>
#include <string>
#include <stdio.h>
#include <list>
#include <iostream>
#include "tinyxml2/tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
	//load document object model
	XMLDocument* p_dom = new XMLDocument;
	p_dom->LoadFile("domotique1.xml");

	// check wether it has been loaded correctly
	XMLError error_ID = p_dom->ErrorID();
	if ( error_ID ) {
		cout << p_dom->ErrorStr() << endl;
		exit(EXIT_FAILURE);
	}
	else
		cout << 'DOM of domotique1.xml was succesfully loaded' << endl;
	}

	int N = 500;

	for (int tick=0; tick<=N; ++tick) {

	}

	return 0;
}

