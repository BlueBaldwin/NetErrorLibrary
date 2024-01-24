#ifndef ERROR_CODE_HANDLER
#define ERROR_CODE_HANDLER

#include "WSAErrorCodeMap.h"

namespace NetErrorLib 
{
	class ErrorCodeHandler
	{
	public:
		ErrorCodeHandler();

		void PrintWinSockError(int errorCode, const std::string& contextMessage);
		void HandleErrorAndCleanup(const SOCKET& socket, const std::string& errorMessage);
		std::string PrintUnknownError(int errorCode);
	};
}

#endif // ERROR_CODE_HANDLER