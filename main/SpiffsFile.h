/*
 * SpiffsFileHandle.h
 *
 *  Created on: 11.04.2017
 *      Author: bernd
 */

#ifndef MAIN_SPIFFSFILE_H_
#define MAIN_SPIFFSFILE_H_

#include <stdlib.h>
#include <string>

#include "SpiffsFileSystem.h"
/*
 * Methods are uppercase due to clash with macros "read", "write", ...
 */
class SpiffsFile {
public:
	SpiffsFile();
	virtual ~SpiffsFile();

	bool Open(std::string s);
	int Write(char* data, int size);
	int Read(char* buf, int maxlen);
	int Read(std::string& readbuffer, int maxread);
	int Write(std::string& writebuffer);
	void Close();
	const char* LastError();
	int getBytesWritten() { return bytesWritten; }


private:
	spiffs_file fileHandle = 0;
	size_t bytesWritten = 0;

};

#endif /* MAIN_SPIFFSFILE_H_ */
