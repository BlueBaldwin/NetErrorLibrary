#ifndef WSA_ERROR_CODE_MAP
#define WSA_ERROR_CODE_MAP

#include <unordered_map>
#include <string>

namespace NetErrorLib
{
	class WSAErrorCodeMap
	{
    private:
        std::unordered_map<int, std::string> errorCodeMap;
        WSAErrorCodeMap();

        // Delete the copy constructor and assignment operator
        WSAErrorCodeMap(const WSAErrorCodeMap&) = delete;
        WSAErrorCodeMap& operator=(const WSAErrorCodeMap&) = delete;

    public:
        static WSAErrorCodeMap& GetInstance();
        const std::unordered_map<int, std::string>& GetErrorCodeMap() const;
	};
}

#endif // WSA_ERROR_CODE_MAP
