/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "credentials.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

cred_out *
registerproc_1(cred_in *argp, CLIENT *clnt)
{
	static cred_out clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REGISTERPROC,
		(xdrproc_t) xdr_cred_in, (caddr_t) argp,
		(xdrproc_t) xdr_cred_out, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

cred_out *
loginproc_1(cred_in *argp, CLIENT *clnt)
{
	static cred_out clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, LOGINPROC,
		(xdrproc_t) xdr_cred_in, (caddr_t) argp,
		(xdrproc_t) xdr_cred_out, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}