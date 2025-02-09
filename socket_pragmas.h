#pragma libcall SockBase setup_sockets 1E 8102
#pragma libcall SockBase cleanup_sockets 24 0
#ifdef UNIX_COMPAT
#pragma libcall SockBase s_socket 2A 21003
#else
#pragma libcall SockBase socket 2A 21003
#endif
#pragma libcall SockBase s_close 30 001
#pragma libcall SockBase s_getsignal 36 101
#pragma libcall SockBase strerror 3C 101
#pragma libcall SockBase get_tz 5A 0
#pragma libcall SockBase getdomainname 60 1902
#pragma libcall SockBase gethostname 72 0802
#pragma libcall SockBase sethostent 78 101
#pragma libcall SockBase endhostent 7E 0
#pragma libcall SockBase gethostent 84 0
#pragma libcall SockBase gethostbyname 8A 801
#pragma libcall SockBase gethostbyaddr 90 10803
#pragma libcall SockBase inet_addr 96 901
#pragma libcall SockBase inet_makeaddr 9C 1002
#pragma libcall SockBase inet_lnaof A2 101
#pragma libcall SockBase inet_netof A8 101
#pragma libcall SockBase inet_network AE 901
#pragma libcall SockBase as225_inet_ntoa B4 101
#ifdef UNIX_COMPAT
#pragma libcall SockBase s_accept BA 98003
#else
#pragma libcall SockBase accept BA 98003
#endif
#pragma libcall SockBase bind C0 19003
#pragma libcall SockBase connect C6 19003
#pragma libcall SockBase s_ioctl CC 81003
#pragma libcall SockBase listen D2 1002
#pragma libcall SockBase recv D8 218004
#pragma libcall SockBase recvfrom DE A9218006
#pragma libcall SockBase recvmsg E4 18003
#pragma libcall SockBase select EA 1A98005
#pragma libcall SockBase selectwait F0 21A98006
#pragma libcall SockBase send F6 918004
#pragma libcall SockBase sendto FC 39218006
#pragma libcall SockBase sendmsg 102 18003
#pragma libcall SockBase shutdown 108 1002
#pragma libcall SockBase setsockopt 10E 3821005
#pragma libcall SockBase getsockopt 114 9821005
#pragma libcall SockBase setnetent 11A 101
#pragma libcall SockBase endnetent 120 0
#pragma libcall SockBase getnetent 126 0
#pragma libcall SockBase getnetbyaddr 12C 1002
#pragma libcall SockBase getnetbyname 132 801
#pragma libcall SockBase setprotoent 138 101
#pragma libcall SockBase endprotoent 13E 0
#pragma libcall SockBase getprotoent 144 0
#pragma libcall SockBase getprotobyname 14A 801
#pragma libcall SockBase getprotobynumber 150 001
#pragma libcall SockBase setservent 156 101
#pragma libcall SockBase endservent 15C 0
#pragma libcall SockBase getservent 162 0
#pragma libcall SockBase getservbyname 168 9802
#pragma libcall SockBase getservbyport 16E 8002
#pragma libcall SockBase getpeername 198 98003
#pragma libcall SockBase getsockname 19E 98003
#pragma libcall SockBase s_syslog 1A4 8002
#pragma libcall SockBase reconfig 1AA 0
#pragma libcall SockBase s_release 1B0 101
#pragma libcall SockBase s_inherit 1B6 101
#pragma libcall SockBase s_dev_list 1BC 1002
