#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <exception>

class notFound : public exception {
	public:
		const char * what() 
		{
			return "Key not found...";
		}
};

#endif