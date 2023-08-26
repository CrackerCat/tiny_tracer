#pragma once

#include "pin.H"

//* ==================================================================== */
// Prototypes
/* ===================================================================== */
namespace AntiDbg {
	VOID WatchMemoryAccess(ADDRINT addr, UINT32 size, const ADDRINT insAddr);
	VOID WatchThreadStart(THREADID threadid, CONTEXT* ctxt, INT32 flags, VOID* v);
	VOID WatchCompareSoftBrk(ADDRINT Address, ADDRINT immVal);
	VOID MonitorAntiDbgFunctions(IMG Image);
	VOID FlagsCheck(const CONTEXT* ctxt, THREADID tid);
	VOID FlagsCheck_after(const CONTEXT* ctxt, THREADID tid, ADDRINT eip);
	VOID InterruptCheck(const CONTEXT* ctxt);
};
