#ifndef MAIN_DYNAMICREQUESTHANDLEROLD_H_
#define MAIN_DYNAMICREQUESTHANDLEROLD_H_

#include <string>
#include <list>

#include "UrlParser.h"

class Ufo;
class DisplayCharter;

class DynamicRequestHandler {
public:
	DynamicRequestHandler();
	virtual ~DynamicRequestHandler();

	__uint8_t HandleApiRequest(std::list<TParam>& params, std::string& body);
	__uint8_t HandleInfoRequest(std::list<TParam>& params, std::string& body);
	__uint8_t HandleConfigRequest(std::list<TParam>& params, std::string& body);

	void CheckForRestart();

private:
	bool mbRestart;
};

#endif /* MAIN_DYNAMICREQUESTHANDLEROLD_H_ */
