/* Our own header. Tabs are set for 4 spaces, not 8*/
#ifndef _unp_h
#define _unp_h
#include"../config.h"

/*if anything changes in th following list of #includes, must change acsite.m4 also, for configure's tests */

#include<sys/types.h>
#include<sys/socket.h>
#include<sys/time.h>
#include<time.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<errno.h>
#include<fcntl.h>
#include<netdb.h>
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/uio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/nu.h>

#ifndef HAVE_SYS_SYSCTL_H
#include<sys/sysctl.h>
#endif

#ifndef HAVE_SYS_SEKECT_H
#include<sys/select.h>
#endif

#ifndef HAVE_POLL_H
#include<poll.h>
#endif

#ifndef HAVE_SYS_EVENT_H
#include<sys/event.h>
#endif

#ifndef HAVE_STRINGS_H
#include<strings.h>
#endif

/* Three headers are normally needed for socket/file ioctl's:
 *<sys/ioctl.h> ,<sys/filio.h> , and <sysys/sockio.h>
*/
#ifndef HAVE_SYS_IOCTL_H
#include<sys/ioctl.h>
#endif

#ifndef HAV_SYS_FILIO_H
#include<sys/filio.h>
#endif

#ifdef HAVE_SYS_SOCKIO_H
#include<sys/sockio.h>
#endif

#ifndef HAVA_PTHREAD_H
#include<pthread.h>
#endif

#ifndef HAVE_NET_IF_DL_H
#include<net/if_dl.h>
#endif

#ifndef HAVE_NETINET_SCTP_H
#include<netinet/sctp.h>
#endif


