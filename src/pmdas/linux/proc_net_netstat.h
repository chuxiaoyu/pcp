/*
 * Copyright (c) 2014,2020 Red Hat.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#define NETSTAT_MAX_COLUMNS	256 /* arbitrary upper bound (228 observed as of 22/04/2014)*/

enum {
    _PM_NETSTAT_IPEXT_INNOROUTES = 0,
    _PM_NETSTAT_IPEXT_INTRUNCATEDPKTS,
    _PM_NETSTAT_IPEXT_INMCASTPKTS,
    _PM_NETSTAT_IPEXT_OUTMCASTPKTS,
    _PM_NETSTAT_IPEXT_INBCASTPKTS,
    _PM_NETSTAT_IPEXT_OUTBCASTPKTS,
    _PM_NETSTAT_IPEXT_INOCTETS,
    _PM_NETSTAT_IPEXT_OUTOCTETS,
    _PM_NETSTAT_IPEXT_INMCASTOCTETS,
    _PM_NETSTAT_IPEXT_OUTMCASTOCTETS,
    _PM_NETSTAT_IPEXT_INBCASTOCTETS,
    _PM_NETSTAT_IPEXT_OUTBCASTOCTETS,
    _PM_NETSTAT_IPEXT_CSUMERRORS,
    _PM_NETSTAT_IPEXT_NOECTPKTS,
    _PM_NETSTAT_IPEXT_ECT1PKTS,
    _PM_NETSTAT_IPEXT_ECT0PKTS,
    _PM_NETSTAT_IPEXT_CEPKTS,
    _PM_NETSTAT_IPEXT_REASMOVERLAPS,

    _PM_NETSTAT_IPEXT_NFIELDS /* must be last */
};

enum {
    _PM_NETSTAT_TCPEXT_SYNCOOKIESSENT = 0,
    _PM_NETSTAT_TCPEXT_SYNCOOKIESRECV,
    _PM_NETSTAT_TCPEXT_SYNCOOKIESFAILED,
    _PM_NETSTAT_TCPEXT_EMBRYONICRSTS,
    _PM_NETSTAT_TCPEXT_PRUNECALLED,
    _PM_NETSTAT_TCPEXT_RCVPRUNED,
    _PM_NETSTAT_TCPEXT_OFOPRUNED,
    _PM_NETSTAT_TCPEXT_OUTOFWINDOWICMPS,
    _PM_NETSTAT_TCPEXT_LOCKDROPPEDICMPS,
    _PM_NETSTAT_TCPEXT_ARPFILTER,
    _PM_NETSTAT_TCPEXT_TIMEWAITED,
    _PM_NETSTAT_TCPEXT_TIMEWAITRECYCLED,
    _PM_NETSTAT_TCPEXT_TIMEWAITKILLED,
    _PM_NETSTAT_TCPEXT_PAWSPASSIVEREJECTED,
    _PM_NETSTAT_TCPEXT_PAWSACTIVEREJECTED,
    _PM_NETSTAT_TCPEXT_PAWSESTABREJECTED,
    _PM_NETSTAT_TCPEXT_DELAYEDACKS,
    _PM_NETSTAT_TCPEXT_DELAYEDACKLOCKED,
    _PM_NETSTAT_TCPEXT_DELAYEDACKLOST,
    _PM_NETSTAT_TCPEXT_LISTENOVERFLOWS,
    _PM_NETSTAT_TCPEXT_LISTENDROPS,
    _PM_NETSTAT_TCPEXT_TCPPREQUEUED,
    _PM_NETSTAT_TCPEXT_TCPDIRECTCOPYFROMBACKLOG,
    _PM_NETSTAT_TCPEXT_TCPDIRECTCOPYFROMPREQUEUE,
    _PM_NETSTAT_TCPEXT_TCPPREQUEUEDROPPED,
    _PM_NETSTAT_TCPEXT_TCPHPHITS,
    _PM_NETSTAT_TCPEXT_TCPHPHITSTOUSER,
    _PM_NETSTAT_TCPEXT_TCPPUREACKS,
    _PM_NETSTAT_TCPEXT_TCPHPACKS,
    _PM_NETSTAT_TCPEXT_TCPRENORECOVERY,
    _PM_NETSTAT_TCPEXT_TCPSACKRECOVERY,
    _PM_NETSTAT_TCPEXT_TCPSACKRENEGING,
    _PM_NETSTAT_TCPEXT_TCPFACKREORDER,
    _PM_NETSTAT_TCPEXT_TCPSACKREORDER,
    _PM_NETSTAT_TCPEXT_TCPRENOREORDER,
    _PM_NETSTAT_TCPEXT_TCPTSREORDER,
    _PM_NETSTAT_TCPEXT_TCPFULLUNDO,
    _PM_NETSTAT_TCPEXT_TCPPARTIALUNDO,
    _PM_NETSTAT_TCPEXT_TCPDSACKUNDO,
    _PM_NETSTAT_TCPEXT_TCPLOSSUNDO,
    _PM_NETSTAT_TCPEXT_TCPLOSTRETRANSMIT,
    _PM_NETSTAT_TCPEXT_TCPRENOFAILURES,
    _PM_NETSTAT_TCPEXT_TCPSACKFAILURES,
    _PM_NETSTAT_TCPEXT_TCPLOSSFAILURES,
    _PM_NETSTAT_TCPEXT_TCPFASTRETRANS,
    _PM_NETSTAT_TCPEXT_TCPFORWARDRETRANS,
    _PM_NETSTAT_TCPEXT_TCPSLOWSTARTRETRANS,
    _PM_NETSTAT_TCPEXT_TCPTIMEOUTS,
    _PM_NETSTAT_TCPEXT_TCPLOSSPROBES,
    _PM_NETSTAT_TCPEXT_TCPLOSSPROBERECOVERY,
    _PM_NETSTAT_TCPEXT_TCPRENORECOVERYFAIL,
    _PM_NETSTAT_TCPEXT_TCPSACKRECOVERYFAIL,
    _PM_NETSTAT_TCPEXT_TCPSCHEDULERFAILED,
    _PM_NETSTAT_TCPEXT_TCPRCVCOLLAPSED,
    _PM_NETSTAT_TCPEXT_TCPDSACKOLDSENT,
    _PM_NETSTAT_TCPEXT_TCPDSACKOFOSENT,
    _PM_NETSTAT_TCPEXT_TCPDSACKRECV,
    _PM_NETSTAT_TCPEXT_TCPDSACKOFORECV,
    _PM_NETSTAT_TCPEXT_TCPABORTONDATA,
    _PM_NETSTAT_TCPEXT_TCPABORTONCLOSE,
    _PM_NETSTAT_TCPEXT_TCPABORTONMEMORY,
    _PM_NETSTAT_TCPEXT_TCPABORTONTIMEOUT,
    _PM_NETSTAT_TCPEXT_TCPABORTONLINGER,
    _PM_NETSTAT_TCPEXT_TCPABORTFAILED,
    _PM_NETSTAT_TCPEXT_TCPMEMORYPRESSURES,
    _PM_NETSTAT_TCPEXT_TCPSACKDISCARD,
    _PM_NETSTAT_TCPEXT_TCPDSACKIGNOREDOLD,
    _PM_NETSTAT_TCPEXT_TCPDSACKIGNOREDNOUNDO,
    _PM_NETSTAT_TCPEXT_TCPSPURIOUSRTOS,
    _PM_NETSTAT_TCPEXT_TCPMD5NOTFOUND,
    _PM_NETSTAT_TCPEXT_TCPMD5UNEXPECTED,
    _PM_NETSTAT_TCPEXT_SACKSHIFTED,
    _PM_NETSTAT_TCPEXT_SACKMERGED,
    _PM_NETSTAT_TCPEXT_SACKSHIFTFALLBACK,
    _PM_NETSTAT_TCPEXT_TCPBACKLOGDROP,
    _PM_NETSTAT_TCPEXT_TCPMINTTLDROP,
    _PM_NETSTAT_TCPEXT_TCPDEFERACCEPTDROP,
    _PM_NETSTAT_TCPEXT_IPRPFILTER,
    _PM_NETSTAT_TCPEXT_TCPTIMEWAITOVERFLOW,
    _PM_NETSTAT_TCPEXT_TCPREQQFULLDOCOOKIES,
    _PM_NETSTAT_TCPEXT_TCPREQQFULLDROP,
    _PM_NETSTAT_TCPEXT_TCPRETRANSFAIL,
    _PM_NETSTAT_TCPEXT_TCPRCVCOALESCE,
    _PM_NETSTAT_TCPEXT_TCPOFOQUEUE,
    _PM_NETSTAT_TCPEXT_TCPOFODROP,
    _PM_NETSTAT_TCPEXT_TCPOFOMERGE,
    _PM_NETSTAT_TCPEXT_TCPCHALLENGEACK,
    _PM_NETSTAT_TCPEXT_TCPSYNCHALLENGE,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENACTIVE,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENPASSIVE,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENPASSIVEFAIL,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENLISTENOVERFLOW,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENCOOKIEREQD,
    _PM_NETSTAT_TCPEXT_TCPSPURIOUS_RTX_HOSTQUEUES,
    _PM_NETSTAT_TCPEXT_BUSYPOLLRXPACKETS,
    _PM_NETSTAT_TCPEXT_TCPAUTOCORKING,
    _PM_NETSTAT_TCPEXT_TCPFROMZEROWINDOWADV,
    _PM_NETSTAT_TCPEXT_TCPTOZEROWINDOWADV,
    _PM_NETSTAT_TCPEXT_TCPWANTZEROWINDOWADV,
    _PM_NETSTAT_TCPEXT_TCPSYNRETRANS,
    _PM_NETSTAT_TCPEXT_TCPORIGDATASENT,
    _PM_NETSTAT_TCPEXT_TCPBACKLOGCOALESCE,
    _PM_NETSTAT_TCPEXT_TCPMEMORYPRESSURESCHRONO,
    _PM_NETSTAT_TCPEXT_TCPMD5FAILURE,
    _PM_NETSTAT_TCPEXT_PFMEMALLOCDROP,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENACTIVEFAIL,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENBLACKHOLE,
    _PM_NETSTAT_TCPEXT_TCPHYSTARTTRAINDETECT,
    _PM_NETSTAT_TCPEXT_TCPHYSTARTTRAINCWND,
    _PM_NETSTAT_TCPEXT_TCPHYSTARTDELAYDETECT,
    _PM_NETSTAT_TCPEXT_TCPHYSTARTDELAYCWND,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDSYNRECV,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDPAWS,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDSEQ,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDFINWAIT2,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDTIMEWAIT,
    _PM_NETSTAT_TCPEXT_TCPACKSKIPPEDCHALLENGE,
    _PM_NETSTAT_TCPEXT_TCPWINPROBE,
    _PM_NETSTAT_TCPEXT_TCPKEEPALIVE,
    _PM_NETSTAT_TCPEXT_TCPMTUPFAIL,
    _PM_NETSTAT_TCPEXT_TCPMTUPSUCCESS,
    _PM_NETSTAT_TCPEXT_TCPDELIVERED,
    _PM_NETSTAT_TCPEXT_TCPDELIVEREDCE,
    _PM_NETSTAT_TCPEXT_TCPACKCOMPRESSED,
    _PM_NETSTAT_TCPEXT_TCPZEROWINDOWDROP,
    _PM_NETSTAT_TCPEXT_TCPRCVQDROP,
    _PM_NETSTAT_TCPEXT_TCPWQUEUETOOBIG,
    _PM_NETSTAT_TCPEXT_TCPFASTOPENPASSIVEALTKEY,
    _PM_NETSTAT_TCPEXT_TCPTIMEOUTREHASH,
    _PM_NETSTAT_TCPEXT_TCPDUPLICATEDATAREHASH,
    _PM_NETSTAT_TCPEXT_TCPDSACKRECVSEGS,
    _PM_NETSTAT_TCPEXT_TCPDSACKIGNOREDDUBIOUS,
    _PM_NETSTAT_TCPEXT_TCPMIGRATEREQSUCCESS,
    _PM_NETSTAT_TCPEXT_TCPMIGRATEREQFAILURE,
    _PM_NETSTAT_TCPEXT_TCPLOSS,

    _PM_NETSTAT_TCPEXT_NFIELDS /* must be last */
};

enum {
    _PM_NETSTAT_MPTCPEXT_MPCAPABLESYNRX = 0,
    _PM_NETSTAT_MPTCPEXT_MPCAPABLEACKRX,
    _PM_NETSTAT_MPTCPEXT_MPCAPABLEFALLBACKACK,
    _PM_NETSTAT_MPTCPEXT_MPCAPABLEFALLBACKSYNACK,
    _PM_NETSTAT_MPTCPEXT_MPTCPRETRANS,
    _PM_NETSTAT_MPTCPEXT_MPJOINNOTOKENFOUND,
    _PM_NETSTAT_MPTCPEXT_MPJOINSYNRX,
    _PM_NETSTAT_MPTCPEXT_MPJOINSYNACKRX,
    _PM_NETSTAT_MPTCPEXT_MPJOINSYNACKHMACFAILURE,
    _PM_NETSTAT_MPTCPEXT_MPJOINACKRX,
    _PM_NETSTAT_MPTCPEXT_MPJOINACKHMACFAILURE,
    _PM_NETSTAT_MPTCPEXT_DSSNOTMATCHING,
    _PM_NETSTAT_MPTCPEXT_INFINITEMAPRX,
    _PM_NETSTAT_MPTCPEXT_MPCAPABLESYNTX,
    _PM_NETSTAT_MPTCPEXT_MPCAPABLESYNACKRX,
    _PM_NETSTAT_MPTCPEXT_MPFALLBACKTOKENINIT,
    _PM_NETSTAT_MPTCPEXT_DSSNOMATCHTCP,
    _PM_NETSTAT_MPTCPEXT_DATACSUMERR,
    _PM_NETSTAT_MPTCPEXT_OFOQUEUETAIL,
    _PM_NETSTAT_MPTCPEXT_OFOQUEUE,
    _PM_NETSTAT_MPTCPEXT_OFOMERGE,
    _PM_NETSTAT_MPTCPEXT_NODSSINWINDOW,
    _PM_NETSTAT_MPTCPEXT_DUPLICATEDATA,
    _PM_NETSTAT_MPTCPEXT_ADDADDR,
    _PM_NETSTAT_MPTCPEXT_ECHOADD,
    _PM_NETSTAT_MPTCPEXT_PORTADD,
    _PM_NETSTAT_MPTCPEXT_MPJOINPORTSYNRX,
    _PM_NETSTAT_MPTCPEXT_MPJOINPORTSYNACKRX,
    _PM_NETSTAT_MPTCPEXT_MPJOINPORTACKRX,
    _PM_NETSTAT_MPTCPEXT_MISMATCHPORTSYNRX,
    _PM_NETSTAT_MPTCPEXT_MISMATCHPORTACKRX,
    _PM_NETSTAT_MPTCPEXT_RMADDR,
    _PM_NETSTAT_MPTCPEXT_RMSUBFLOW,
    _PM_NETSTAT_MPTCPEXT_MPPRIOTX,
    _PM_NETSTAT_MPTCPEXT_MPPRIORX,
    _PM_NETSTAT_MPTCPEXT_RCVPRUNED,

    _PM_NETSTAT_MPTCPEXT_NFIELDS /* must be last */
};

typedef struct {
    __uint64_t	ip[_PM_NETSTAT_IPEXT_NFIELDS];
    __uint64_t	tcp[_PM_NETSTAT_TCPEXT_NFIELDS];
    __uint64_t	mptcp[_PM_NETSTAT_MPTCPEXT_NFIELDS];
} proc_net_netstat_t;

extern int refresh_proc_net_netstat(proc_net_netstat_t *);
