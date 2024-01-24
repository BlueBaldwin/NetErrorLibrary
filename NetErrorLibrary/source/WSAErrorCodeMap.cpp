#include "WSAErrorCodeMap.h"

namespace NetErrorLib 
{

    WSAErrorCodeMap::WSAErrorCodeMap()
    {
        errorCodeMap = {
            {6, "WSA_INVALID_HANDLE: Specified event object handle is invalid."},
            {8, "WSA_NOT_ENOUGH_MEMORY: Insufficient memory available."},
            {87, "WSA_INVALID_PARAMETER: One or more parameters are invalid."},
            {995, "WSA_OPERATION_ABORTED: Overlapped operation aborted. An overlapped operation was canceled due to the closure of the socket, or the execution of the SIO_FLUSH command in WSAIoctl."},
            {996, "WSA_IO_INCOMPLETE: Overlapped I/O event object not in signaled state. The application has tried to determine the status of an overlapped operation which is not yet completed."},
            {997, "WSA_IO_PENDING: Overlapped operations will complete later. The application has initiated an overlapped operation that cannot be completed immediately."},
            {10004, "WSAEINTR: Interrupted function call. A blocking operation was interrupted by a call to WSACancelBlockingCall."},
            {10009, "WSAEBADF: File handle is not valid. The file handle supplied is not valid."},
            {10013, "WSAEACCES: Permission denied. An attempt was made to access a socket in a way forbidden by its access permissions."},
            {10014, "WSAEFAULT: Bad address. The system detected an invalid pointer address in attempting to use a pointer argument of a call."},
            {10022, "WSAEINVAL: Invalid argument. Some invalid argument was supplied (for example, specifying an invalid level to the setsockopt function)."},
            {10024, "WSAEMFILE: Too many open files. Too many open sockets. Each implementation may have a maximum number of socket handles available."},
            {10035, "WSAEWOULDBLOCK: Resource temporarily unavailable. This error is returned from operations on nonblocking sockets that cannot be completed immediately."},
            {10036, "WSAEINPROGRESS: Operation now in progress. A blocking operation is currently executing."},
            {10037, "WSAEALREADY: Operation already in progress. An operation was attempted on a nonblocking socket with an operation already in progress."},
            {10038, "WSAENOTSOCK: Socket operation on nonsocket. An operation was attempted on something that is not a socket."},
            {10039, "WSAEDESTADDRREQ: Destination address required. A required address was omitted from an operation on a socket."},
            {10040, "WSAEMSGSIZE: Message too long. A message sent on a datagram socket was larger than the internal message buffer or some other network limit."},
            {10041, "WSAEPROTOTYPE: Protocol wrong type for socket. A protocol was specified in the socket function call that does not support the semantics of the socket type requested."},
            {10042, "WSAEPROTONOSUPPORT: Protocol not supported. The requested protocol has not been configured into the system, or no implementation for it exists."},
            {10043, "WSAESOCKTNOSUPPORT: Socket type not supported. The support for the specified socket type does not exist in this address family."},
            {10045, "WSAEOPNOTSUPP: Operation not supported. The attempted operation is not supported for the type of object referenced."},
            {10046, "WSAEPFNOSUPPORT: Protocol family not supported. The protocol family has not been configured into the system or no implementation for it exists."},
            {10047, "WSAEAFNOSUPPORT: Address family not supported by protocol family. An address incompatible with the requested protocol was used."},
            {10048, "WSAEADDRINUSE: Address already in use. Typically, only one usage of each socket address (protocol/IP address/port) is permitted."},
            {10049, "WSAEADDRNOTAVAIL: Cannot assign requested address. The requested address is not valid in its context."},
            {10050, "WSAENETDOWN: Network is down. A socket operation encountered a dead network."},
            {10051, "WSAENETUNREACH: Network is unreachable. A socket operation was attempted to an unreachable network."},
            {10052, "WSAENETRESET: Network dropped connection on reset. The connection has been broken due to keep-alive activity detecting a failure."},
            {10053, "WSAECONNABORTED: Software caused connection abort. An established connection was aborted by the software in your host computer."},
            {10054, "WSAECONNRESET: Connection reset by peer. An existing connection was forcibly closed by the remote host."},
            {10055, "WSAENOBUFS: No buffer space available. An operation on a socket could not be performed because the system lacked sufficient buffer space or because a queue was full."},
            {10056, "WSAEISCONN: Socket is already connected. A connect request was made on an already-connected socket."},
            {10057, "WSAENOTCONN: Socket is not connected. A request to send or receive data was disallowed because the socket is not connected."},
            {10058, "WSAESHUTDOWN: Cannot send after socket shutdown. A request to send or receive data was disallowed because the socket had already been shut down in that direction."},
            {10059, "WSAETOOMANYREFS: Too many references. Too many references to some kernel object."},
            {10060, "WSAETIMEDOUT: Connection timed out. A connection attempt failed because the connected party did not properly respond after a period of time."},
            {10061, "WSAECONNREFUSED: Connection refused. No connection could be made because the target computer actively refused it."},
            {10062, "WSAELOOP: Cannot translate name. Cannot translate a name."},
            {10063, "WSAENAMETOOLONG: Name too long. A name component or a name was too long."},
            {10064, "WSAEHOSTDOWN: Host is down. A socket operation failed because the destination host is down."},
            {10065, "WSAEHOSTUNREACH: No route to host. A socket operation was attempted to an unreachable host."},
            {10066, "WSAENOTEMPTY: Directory not empty. Cannot remove a directory that is not empty."},
            {10067, "WSAEPROCLIM: Too many processes. A Windows Sockets implementation may have a limit on the number of applications that can use it simultaneously."},
            {10068, "WSAEUSERS: User quota exceeded. Ran out of user quota."},
            {10069, "WSAEDQUOT: Disk quota exceeded. Ran out of disk quota."},
            {10070, "WSAESTALE: Stale file handle reference. The file handle reference is no longer available."},
            {10071, "WSAEREMOTE: Item is remote. The item is not available locally."},
            {10091, "WSASYSNOTREADY: Network subsystem is unavailable. This error is returned by WSAStartup if the Windows Sockets implementation cannot function at this time."},
            {10092, "WSAVERNOTSUPPORTED: Winsock.dll version out of range. The current Windows Sockets implementation does not support the Windows Sockets specification version requested by the application."},
            {10093, "WSANOTINITIALISED: Successful WSAStartup not yet performed. Either the application has not called WSAStartup or WSAStartup failed."},
            {10101, "WSAEDISCON: Graceful shutdown in progress. Returned by WSARecv and WSARecvFrom to indicate that the remote party has initiated a graceful shutdown sequence."},
            {10102, "WSAENOMORE: No more results. No more results can be returned by the WSALookupServiceNext function."},
            {10103, "WSAECANCELLED: Call has been canceled. A call to the WSALookupServiceEnd function was made while this call was still processing."},
            {10104, "WSAEINVALIDPROCTABLE: Procedure call table is invalid. The service provider procedure call table is invalid."},
            {10105, "WSAEINVALIDPROVIDER: Service provider is invalid. The requested service provider is invalid."},
            {10106, "WSAEPROVIDERFAILEDINIT: Service provider failed to initialize. The requested service provider could not be loaded or initialized."},
            {10107, "WSASYSCALLFAILURE: System call failure. A system call that should never fail has failed."},
            {10108, "WSASERVICE_NOT_FOUND: Service not found. No such service is known."},
            {10109, "WSATYPE_NOT_FOUND: Class type not found. The specified class was not found."},
            {10110, "WSA_E_NO_MORE: No more results. No more results can be returned by the WSALookupServiceNext function."},
            {10111, "WSA_E_CANCELLED: Call was canceled. A call to the WSALookupServiceEnd function was made while this call was still processing."},
            {10112, "WSAEREFUSED: Database query was refused. A database query failed because it was actively refused."},
            {11001, "WSAHOST_NOT_FOUND: Host not found. No such host is known."},
            {11002, "WSATRY_AGAIN: Nonauthoritative host not found. This is usually a temporary error during host name resolution."},
            {11003, "WSANO_RECOVERY: This is a nonrecoverable error. This indicates that some sort of nonrecoverable error occurred during a database lookup."},
            {11004, "WSANO_DATA: Valid name, no data record of requested type. The requested name is valid but does not have the correct associated data being resolved for."},
            {11005, "WSA_QOS_RECEIVERS: QoS receivers. At least one QoS reserve has arrived."},
            {11006, "WSA_QOS_SENDERS: QoS senders. At least one QoS send path has arrived."},
            {11007, "WSA_QOS_NO_SENDERS: No QoS senders. There are no QoS senders."},
            {11008, "WSA_QOS_NO_RECEIVERS: QoS no receivers. There are no QoS receivers."},
            {11009, "WSA_QOS_REQUEST_CONFIRMED: QoS request confirmed. The QoS reserve request has been confirmed."},
            {11010, "WSA_QOS_ADMISSION_FAILURE: QoS admission error. A QoS error occurred due to lack of resources."},
            {11011, "WSA_QOS_POLICY_FAILURE: QoS policy failure. The QoS request was rejected because the policy system couldn't allocate the requested resource within the existing policy."},
            {11012, "WSA_QOS_BAD_STYLE: QoS bad style. An unknown or conflicting QoS style was encountered."},
            {11013, "WSA_QOS_BAD_OBJECT: QoS bad object. A problem was encountered with some part of the filterspec or the provider-specific buffer in general."},
            {11014, "WSA_QOS_TRAFFIC_CTRL_ERROR: QoS traffic control error. An error with the underlying traffic control (TC) API as the generic QoS request was converted for local enforcement by the TC API."},
            {11015, "WSA_QOS_GENERIC_ERROR: QoS generic error. A general QoS error."},
            {11016, "WSA_QOS_ESERVICETYPE: QoS service type error. An invalid or unrecognized service type was found in the QoS flowspec."},
            {11017, "WSA_QOS_EFLOWSPEC: QoS flowspec error. An invalid or inconsistent flowspec was found in the QOS structure."},
            {11018, "WSA_QOS_EPROVSPECBUF: Invalid QoS provider buffer. An invalid QoS provider-specific buffer."},
            {11019, "WSA_QOS_EFILTERSTYLE: Invalid QoS filter style. An invalid QoS filter style was used."},
            {11020, "WSA_QOS_EFILTERTYPE: Invalid QoS filter type. An invalid QoS filter type was used."},
            {11021, "WSA_QOS_EFILTERCOUNT: Incorrect QoS filter count. An incorrect number of QoS FILTERSPECs were specified in the FLOWDESCRIPTOR."},
            {11022, "WSA_QOS_EOBJLENGTH: Invalid QoS object length. An object with an invalid ObjectLength field was specified in the QoS provider-specific buffer."},
            {11023, "WSA_QOS_EFLOWCOUNT: Incorrect QoS flow count. An incorrect number of flow descriptors was specified in the QoS structure."},
            {11024, "WSA_QOS_EUNKOWNPSOBJ: Unrecognized QoS object. An unrecognized object was found in the QoS provider-specific buffer."},
            {11025, "WSA_QOS_EPOLICYOBJ: Invalid QoS policy object. An invalid policy object was found in the QoS provider-specific buffer."},
            {11026, "WSA_QOS_EFLOWDESC: Invalid QoS flow descriptor. An invalid QoS flow descriptor was found in the flow descriptor list."},
            {11027, "WSA_QOS_EPSFLOWSPEC: Invalid QoS provider-specific flowspec. An invalid or inconsistent flowspec was found in the QoS provider-specific buffer."},
            {11028, "WSA_QOS_EPSFILTERSPEC: Invalid QoS provider-specific filterspec. An invalid FILTERSPEC was found in the QoS provider-specific buffer."},
            {11029, "WSA_QOS_ESDMODEOBJ: Invalid QoS shape discard mode object. An invalid shape discard mode object was found in the QoS provider-specific buffer."},
            {11030, "WSA_QOS_ESHAPERATEOBJ: Invalid QoS shaping rate object. An invalid shaping rate object was found in the QoS provider-specific buffer."},
            {11031, "WSA_QOS_RESERVED_PETYPE: Reserved policy QoS element type. A reserved policy element was found in the QoS provider-specific buffer."}
        };
    }

    WSAErrorCodeMap& WSAErrorCodeMap::GetInstance()
    {
        static WSAErrorCodeMap instance;
        return instance;
    }

    const std::unordered_map<int, std::string>& WSAErrorCodeMap::GetErrorCodeMap() const
    {
        return errorCodeMap;
    }
}
